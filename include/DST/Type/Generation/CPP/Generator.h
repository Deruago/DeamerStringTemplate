#ifndef DST_TYPE_GENERATION_CPP_GENERATOR_H
#define DST_TYPE_GENERATION_CPP_GENERATOR_H

#include "DST/Type/Generation/CPP/ConstructionGeneratorTemplate.h"
#include "DST/Type/IR/Construction.h"
#include "DST/User/ConstructionGenerator.h"

namespace DST::type::generation::cpp
{
	class Generator
	{
	private:
		DST::user::ConstructionGeneratorTemplate generator;
		std::string file_name;

	public:
		Generator() = default;

		~Generator() = default;

	public:
		void ExpandDeleteMemberField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				generator.member_->Set(name + "_");
				generator.delete_member_->ExpandVariableField();
			}
		}

		void ExpandEnumField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				generator.member_->Set(name);
				generator.enumeration_->ExpandVariableField();
			}
		}

		void ExpandRegisterMemberField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				generator.member_->Set(name);
				generator.register_member_->ExpandVariableField();
			}
		}

		void ExpandConvertEnumToNameField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				generator.member_->Set(name);
				generator.convert_enum_to_name_case_->ExpandVariableField();
			}
		}

		std::string ReworkString(std::string content)
		{
			std::string contentReworked;
			for (auto& character : content)
			{
				if (character == '"')
				{
					contentReworked += "\\\"";
				}
				else if (character == '\\')
				{
					contentReworked += "\\\\";
				}
				else if (character == '\n')
				{
					contentReworked += "\\n";
				}
				else if (character == '\r')
				{
					contentReworked += "\\r";
				}
				else if (character == '\t')
				{
					contentReworked += "\\t";
				}
				else if (character == '\v')
				{
					contentReworked += "\\v";
				}
				else if (character == '\b')
				{
					contentReworked += "\\b";
				}
				else if (character == '\a')
				{
					contentReworked += "\\a";
				}
				else if (character == '\f')
				{
					contentReworked += "\\f";
				}
				else
				{
					contentReworked += character;
				}
			}

			return contentReworked;
		}

		std::string ReworkScope(std::string scope)
		{
			if (scope.empty())
			{
				return "This";
			}

			std::string reworkScope;
			bool upper = false;
			for (const auto& character : scope)
			{
				if (character == '.')
				{
					upper = true;
					continue;
				}
				else
				{
					if (upper)
					{
						reworkScope += std::toupper(character);
					}
					else
					{
						reworkScope += character;
					}
					upper = false;
				}
			}

			return reworkScope;
		}

		void ExpandMemberInitialization(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				std::cout << "member: " << name << '\n';
				std::cout << "\tvalue: " << variable->GetScope("")->GetValue() << '\n';

				generator.member_->Set(name + "_");

				std::string member_fields;
				// the stuff this variable is made of (first class)
				for (auto content : variable->GetScope("")->GetStringValues())
				{
					if (ReworkString(content).empty())
					{
						continue;
					}
					member_fields += "GenerateVariable(\"" + ReworkString(content) + "\")";
					member_fields += ", ";
				}
				for (auto* content : variable->GetScope("")->GetValues())
				{
					if (content->GetParent().empty())
					{
						if (ReworkString(content->GetValue()).empty())
						{
							continue;
						}
						member_fields +=
							"GenerateVariable(\"" + ReworkString(content->GetValue()) + "\")";
					}
					else
					{
						member_fields += "GenerateVariable(" + content->GetParent() + "_->" +
										 ReworkScope(content->GetScope()) + "())";
					}
					member_fields += ", ";
				}
				if (!member_fields.empty())
				{
					member_fields.pop_back();
					member_fields.pop_back();
				}

				generator.member_fields_->Set(member_fields);
				generator.member_initialization_->ExpandVariableField();
			}
		}

		bool IsScopeReserved(std::string scope)
		{
			scope = ReworkScope(scope);
			std::string loweredString;
			for (const auto character : scope)
			{
				loweredString += std::tolower(character);
			}

			if (loweredString == "" || loweredString == "upper" || loweredString == "this" ||
				loweredString == "name" || loweredString == "lower" || loweredString == "default" ||
				loweredString == "pascal" || loweredString == "snake" || loweredString == "camel" ||
				loweredString == "underscore" || loweredString == "slash" ||
				loweredString == "backslash" || loweredString == "colon" ||
				loweredString == "doublecolon" || loweredString == "variable_field" ||
				loweredString == "variable_field_separator" || loweredString == "function_field" ||
				loweredString == "function_field_separator")
			{
				return true;
			}

			return false;
		}

		void ExpandMemberDeclaration(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				generator.member_->Set(name + "_");
				for (auto& [name, scope] : variable->GetScopes())
				{
					if (IsScopeReserved(ReworkScope(name)))
					{
						continue;
					}

					std::string scope_arguments;
					for (auto content : variable->GetScope(name)->GetStringValues())
					{
						if (ReworkString(content).empty())
						{
							continue;
						}

						scope_arguments += "GenerateVariable(\"" + ReworkString(content) + "\")";
						scope_arguments += ", ";
					}

					for (auto content : variable->GetScope(name)->GetValues())
					{
						if (content->GetParent().empty())
						{
							if (ReworkString(content->GetValue()).empty())
							{
								continue;
							}
							scope_arguments +=
								"GenerateVariable(\"" + ReworkString(content->GetValue()) + "\")";
						}
						else
						{
							scope_arguments += "GenerateVariable(" +
											   generator.class_name_->Lower()->GetValue() + "_->" +
											   content->GetParent() + "_->" +
											   ReworkScope(content->GetScope()) + "())";
						}
						scope_arguments += ", ";
					}

					if (!scope_arguments.empty())
					{
						scope_arguments.pop_back();
						scope_arguments.pop_back();
					}

					generator.scope_arguments_->Set(scope_arguments);
					generator.scope_->Set(ReworkScope(name));

					generator.scope_initialize_->ExpandVariableField();
					generator.scope_field_->ExpandVariableField();
					generator.scope_function_->ExpandVariableField();
					generator.scope_assignment_->ExpandVariableField();
				}
				generator.member_declaration_->ExpandVariableField();
				generator.member_class_declaration_->ExpandVariableField();

				generator.scope_initialize_->variable_field_->Clear();
				generator.scope_field_->variable_field_->Clear();
				generator.scope_function_->variable_field_->Clear();
				generator.scope_assignment_->variable_field_->Clear();
			}
		}

	public:
		void ExpandDeleteMemberFieldRT(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", {name + "_"});
				cppgen->ExpandVariableField("delete_member");
			}
		}

		void ExpandEnumFieldRT(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", {name});
				cppgen->ExpandVariableField("enumeration");
			}
		}

		void ExpandRegisterMemberFieldRT(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", {name});
				cppgen->ExpandVariableField("register_member");
			}
		}

		void ExpandConvertEnumToNameFieldRT(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", {name});
				cppgen->ExpandVariableField("convert_enum_to_name_case");
			}
		}

		void ExpandMemberInitializationRT(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				std::string namerework = name + "_";
				std::cout << "member: " << name << '\n';
				std::cout << "\tvalue: " << variable->GetScope("")->GetValue() << '\n';
				cppgen->SetVariable("member", "", {namerework});
				std::string member_fields;
				// the stuff this variable is made of (first class)
				for (auto content : variable->GetScope("")->GetStringValues())
				{
					if (ReworkString(content).empty())
					{
						continue;
					}
					member_fields += "GenerateVariable(\"" + ReworkString(content) + "\")";
					member_fields += ", ";
				}
				for (auto* content : variable->GetScope("")->GetValues())
				{
					if (content->GetParent().empty())
					{
						if (ReworkString(content->GetValue()).empty())
						{
							continue;
						}
						member_fields +=
							"GenerateVariable(\"" + ReworkString(content->GetValue()) + "\")";
					}
					else
					{
						member_fields += "GenerateVariable(" + content->GetParent() + "_->" +
										 ReworkScope(content->GetScope()) + "())";
					}
					member_fields += ", ";
				}
				if (!member_fields.empty())
				{
					member_fields.pop_back();
					member_fields.pop_back();
				}

				cppgen->SetVariable("member_fields", "", {member_fields});
				cppgen->ExpandVariableField("member_initialization");
			}
		}

		void ExpandMemberDeclarationRT(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", {name + "_"});
				for (auto& [name, scope] : variable->GetScopes())
				{
					if (IsScopeReserved(ReworkScope(name)))
					{
						continue;
					}

					std::string scope_arguments;
					for (auto content : variable->GetScope(name)->GetStringValues())
					{
						if (ReworkString(content).empty())
						{
							continue;
						}

						scope_arguments += "GenerateVariable(\"" + ReworkString(content) + "\")";
						scope_arguments += ", ";
					}

					for (auto content : variable->GetScope(name)->GetValues())
					{
						if (content->GetParent().empty())
						{
							if (ReworkString(content->GetValue()).empty())
							{
								continue;
							}
							scope_arguments +=
								"GenerateVariable(\"" + ReworkString(content->GetValue()) + "\")";
						}
						else
						{
							scope_arguments +=
								"GenerateVariable(" +
								cppgen->GetVariableDefinition("class_name", ".Lower")->GetValue() +
								"_->" + content->GetParent() + "_->" +
								ReworkScope(content->GetScope()) + "())";
						}
						scope_arguments += ", ";
					}

					if (!scope_arguments.empty())
					{
						scope_arguments.pop_back();
						scope_arguments.pop_back();
					}

					cppgen->SetVariable("scope_arguments", "", {scope_arguments});
					cppgen->SetVariable("scope", "", {ReworkScope(name)});
					cppgen->ExpandVariableField("scope_initialize");
					cppgen->ExpandVariableField("scope_field");
					cppgen->ExpandVariableField("scope_function");
					cppgen->ExpandVariableField("scope_assignment");
				}
				cppgen->ExpandVariableField("member_declaration");
				cppgen->ExpandVariableField("member_class_declaration");

				cppgen->ClearVariableField("scope_initialize");
				cppgen->ClearVariableField("scope_field");
				cppgen->ClearVariableField("scope_function");
				cppgen->ClearVariableField("scope_assignment");
			}
		}

		std::string GetCPPClassRepresentationOfConstructionRT(std::string template_ = "",
															  std::string setting_ = "")
		{
			auto* const cppgen =
				user::ConstructionGenerator().GenerateConstructionFromPath(template_, setting_);

			ExpandDeleteMemberFieldRT(cppgen);
			ExpandEnumFieldRT(cppgen);
			ExpandRegisterMemberFieldRT(cppgen);
			ExpandConvertEnumToNameFieldRT(cppgen);

			ExpandMemberInitializationRT(cppgen);
			ExpandMemberDeclarationRT(cppgen);

			const auto output = cppgen->Output();

			delete cppgen;

			return output;
		}

		std::string GetCPPClassRepresentationOfConstructionCT(std::string template_ = "",
															  std::string setting_ = "")
		{
			auto* const cppgen =
				user::ConstructionGenerator().GenerateConstructionFromPath(template_, setting_);

			std::string templateCore = template_.substr(0, template_.size() - 4); // remove '.dst'
			std::string file_name_ = templateCore.substr(0, templateCore.find('.'));
			std::string extension = template_.substr(templateCore.find('.'));

			auto ourTargetLanguage =
				cppgen->GetVariableDefinition("file", ".target_language")->GetValue();
			if (ourTargetLanguage.empty())
			{
				ourTargetLanguage = "C++";
			}
			auto ourFileName = cppgen->GetVariableDefinition("file", ".file_name")->GetValue();
			if (ourFileName.empty())
			{
				if (file_name_.empty())
				{
					ourFileName = "Construction";
				}
				else
				{
					ourFileName = file_name_;
				}
			}
			auto ourClassPostfix =
				cppgen->GetVariableDefinition("file", ".class_postfix")->GetValue();
			if (ourClassPostfix.empty())
			{
				ourClassPostfix = "Template";
			}
			auto ourNamespace = cppgen->GetVariableDefinition("file", ".namespace")->GetValue();
			if (ourNamespace.empty())
			{
				ourNamespace = "DST";
			}
			auto ourExtension = cppgen->GetVariableDefinition("file", ".extension")->GetValue();
			if (ourExtension.empty())
			{
				if (extension.empty())
				{
					ourExtension = "h";
				}
				else
				{
					ourExtension = extension;
				}
			}
			generator.file_->Target_language()->Set(ourTargetLanguage);
			generator.file_->File_name()->Set(ourFileName);
			generator.file_->Class_postfix()->Set(ourClassPostfix);
			generator.file_->Namespace()->Set(ourNamespace);
			generator.file_->Extension()->Set(ourExtension);

			generator.class_name_->Set(generator.class_name_);

			ExpandDeleteMemberField(cppgen);
			ExpandEnumField(cppgen);
			ExpandRegisterMemberField(cppgen);
			ExpandConvertEnumToNameField(cppgen);

			ExpandMemberInitialization(cppgen);
			ExpandMemberDeclaration(cppgen);

			std::cout << generator.class_name_->GetValue() + "." << ourExtension << "\n";
			file_name = generator.class_name_->GetValue() + "." + ourExtension;

			delete cppgen;

			return generator.GetOutput();
		}

		std::string GetFileName()
		{
			return file_name;
		}
	};
}

#endif // DST_TYPE_GENERATION_CPP_GENERATOR_H
