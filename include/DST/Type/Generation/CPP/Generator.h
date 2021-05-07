#ifndef DST_TYPE_GENERATION_CPP_GENERATOR_H
#define DST_TYPE_GENERATION_CPP_GENERATOR_H

#include "DST/Type/Generation/CPP/ConstructionGeneratorTemplate.h"
#include "DST/Type/IR/Construction.h"
#include "DST/User/ConstructionGenerator.h"

namespace DST::type::generation::cpp
{
	class Generator
	{
	public:
		Generator() = default;

		~Generator() = default;
	public:
		void ExpandDeleteMemberField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", { name + "_" });
				cppgen->ExpandVariableField("delete_member");
			}
		}
		
		void ExpandEnumField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", { name });
				cppgen->ExpandVariableField("enumeration");
			}
		}
		
		void ExpandRegisterMemberField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", { name });
				cppgen->ExpandVariableField("register_member");
			}
		}

		void ExpandConvertEnumToNameField(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", { name });
				cppgen->ExpandVariableField("convert_enum_to_name_case");
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
				std::string namerework = name + "_";
				std::cout << "member: " << name << '\n';
				std::cout << "\tvalue: " << variable->GetScope("")->GetValue() << '\n';
				cppgen->SetVariable("member", "", { namerework });
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
						member_fields += "GenerateVariable(\"" + ReworkString(content->GetValue()) + "\")";
					}
					else
					{
						member_fields += "GenerateVariable(" + content->GetParent() + "_->" + ReworkScope(content->GetScope()) + "())";
					}
					member_fields += ", ";
				}
				if (!member_fields.empty())
				{
					member_fields.pop_back();
					member_fields.pop_back();
				}

				cppgen->SetVariable("member_fields", "", { member_fields });
				cppgen->ExpandVariableField("member_initialization");
			}
		}

		bool IsScopeReserved(std::string scope)
		{
			scope = ReworkScope(scope);
			if (scope == "" ||
				scope == "Upper" ||
				scope == "This" ||
				scope == "Name" ||
				scope == "Lower" ||
				scope == "Default" ||
				scope == "Pascal" ||
				scope == "Snake" ||
				scope == "Camel" ||
				scope == "Variable_Field" ||
				scope == "Variable_Field_Separator" ||
				scope == "Function_Field" ||
				scope == "Function_Field_Separator")
			{
				return true;
			}

			return false;
		}

		void ExpandMemberDeclaration(type::ir::Construction* const cppgen)
		{
			for (auto& [name, variable] : cppgen->GetVariableDefinitions())
			{
				cppgen->SetVariable("member", "", { name + "_" });
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
							scope_arguments += "GenerateVariable(\"" + ReworkString(content->GetValue()) + "\")";
						}
						else
						{
							scope_arguments += "GenerateVariable(" + cppgen->GetVariableDefinition("class_name", ".Lower")->GetValue() + "_->" + content->GetParent() + "_->" + ReworkScope(content->GetScope()) + "())";
						}
						scope_arguments += ", ";
					}


					if (!scope_arguments.empty())
					{
						scope_arguments.pop_back();
						scope_arguments.pop_back();
					}

					cppgen->SetVariable("scope_arguments", "", { scope_arguments });
					cppgen->SetVariable("scope", "", { ReworkScope(name) });
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

		std::string GetCPPClassRepresentationOfConstruction()
		{
			user::ConstructionGenerator generator;
			auto* const cppgen = generator.GenerateConstructionFromPath("./Template/CPPGenerator.h.dst", "./Template/CPPGenerator.h.setting.dst");

			ExpandDeleteMemberField(cppgen);
			ExpandEnumField(cppgen);
			ExpandRegisterMemberField(cppgen);
			ExpandConvertEnumToNameField(cppgen);
			
			ExpandMemberInitialization(cppgen);
			ExpandMemberDeclaration(cppgen);

			return cppgen->Output();
		}

		std::string GetCPPClassRepresentationOfConstructionre()
		{
			DST::user::Generator generator;

			for (auto* variable : generator.GetVariables())
			{
				generator.member_->Set(variable->GetName() + "_");
				
				generator.delete_member_->ExpandVariableField();
				generator.enumeration_->ExpandVariableField();
				generator.register_member_->ExpandVariableField();
				generator.convert_enum_to_name_case_->ExpandVariableField();

				generator.member_->Clear();
			}

			for (auto* variable : generator.GetVariables())
			{
				generator.member_->Set(variable->GetName() + "_");

				std::cout << "Name: " << variable->GetName() << "\n";
				if (variable->isString)
				{
					auto text = std::get<0>(variable->value);
					std::cout << "\tText: " << text << "\n";
				}
				else
				{
					auto var = std::get<1>(variable->value);
					for (auto* variable_ : var)
					{
						if (variable_->isString)
						{
							std::cout << "\t\tText: " << ReworkString(variable_->GetValue()) << "\n";
						}
						else
						{
							std::cout << "\t\tVariable: " << ReworkString(generator.ConvertEnumToName(variable_->type)) << "\n";
						}
					}
				}
				std::cout << "\n";
			}
			

			return generator.GetOutput();
		}
	};
}

#endif // DST_TYPE_GENERATION_CPP_GENERATOR_H
