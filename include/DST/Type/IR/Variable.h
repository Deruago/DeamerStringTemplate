#ifndef DST_TYPE_IR_VARIABLE_H
#define DST_TYPE_IR_VARIABLE_H

#include <iostream>
#include <string>
#include <utility>
#include <vector>

namespace DST::type::ir
{
	class VariableReference;

	class Variable
	{
	protected:
		std::string parent;
		std::string scope;
		
		std::vector<std::string> values_string{};
		std::vector<Variable*> values{};
		std::vector<Variable*> own_created_variables{};
	public:
		Variable(std::string value_)
		{
			values_string.push_back(value_);
		}

		Variable(std::vector<std::string> values_)
			: values_string(std::move(values_))
		{
		}

		Variable(const Variable& var)
		{
			values_string = var.values_string;
			values = var.values;
		}

		Variable(Variable* var) : values({var})
		{
		}

		Variable(std::vector<Variable*> vars)
			: values(std::move(vars))
		{
		}

		Variable(const std::vector<VariableReference>& vector);
		Variable(const std::string& scope_, const std::string& value_, const std::string& parent_ = "")
		{
			parent = parent_;
			scope = scope_;
			values_string.push_back(value_);
		}

		virtual ~Variable()
		{
			for (auto* ownVariable : own_created_variables)
			{
				delete ownVariable;
			}
		}
	public:
		std::string GetValue() const
		{
			std::string output;

			for (const auto& string_value : values_string)
			{
				output += string_value;
			}

			for (const auto* value : values)
			{
				output += value->GetValue();
			}
			
			return Specialize(output);
		}

		void SpecializeDoubleColon(const std::string& output, std::string& specialized_output) const
		{
			bool lastWasNonAlpha = true;
			for (const auto character : output)
			{
				if (std::isalpha(character))
				{
					specialized_output += character;
					lastWasNonAlpha = false;
				}
				else
				{
					if (lastWasNonAlpha)
					{
						continue;
					}

					specialized_output += "::";
					lastWasNonAlpha = true;
				}
			}

			// If it contains text
			// remove the tail
			if (!specialized_output.empty() && lastWasNonAlpha)
			{
				specialized_output.pop_back();
				specialized_output.pop_back();
			}
		}

		void SpecializeUpper(const std::string& output, std::string& specialized_output) const
		{
			for (auto character : output)
			{
				specialized_output += ::toupper(character);
			}
		}

		void SpecializeLower(const std::string& output, std::string& specialized_output) const
		{
			for (auto character : output)
			{
				specialized_output += ::tolower(character);
			}
		}

		void SpecializeSlash(const std::string& output, std::string& specialized_output) const
		{
			bool lastWasNonAlpha = true;
			for (const auto character : output)
			{
				if (std::isalpha(character))
				{
					specialized_output += character;
					lastWasNonAlpha = false;
				}
				else
				{
					if (lastWasNonAlpha)
					{
						continue;
					}

					specialized_output += '/';
					lastWasNonAlpha = true;
				}
			}

			// If it contains text
			// remove the tail
			if (!specialized_output.empty() && lastWasNonAlpha)
			{
				specialized_output.pop_back();
			}
		}

		void SpecializeSnake(const std::string& output, std::string& specialized_output) const
		{
			bool lastWasNonAlpha = true;
			for (const auto character : output)
			{
				if (std::isalpha(character))
				{
					specialized_output += character;
					lastWasNonAlpha = false;
				}
				else
				{
					if (lastWasNonAlpha)
					{
						continue;
					}

					specialized_output += '_';
					lastWasNonAlpha = true;
				}
			}

			// If it contains text
			// remove the tail
			if (!specialized_output.empty() && lastWasNonAlpha)
			{
				specialized_output.pop_back();
			}
		}

		std::string Specialize(const std::string& output) const
		{
			std::string specialized_output;
			if (scope == ".Lower")
			{
				SpecializeLower(output, specialized_output);
			}
			else if (scope == ".Upper")
			{
				SpecializeUpper(output, specialized_output);
			}
			else if (scope == ".DoubleColon")
			{
				SpecializeDoubleColon(output, specialized_output);
			}
			else if (scope == ".Slash")
			{
				SpecializeSlash(output, specialized_output);
			}
			else if (scope == ".Snake" || scope == ".Underscore")
			{
				SpecializeSnake(output, specialized_output);
			}
			else
			{
				specialized_output = output;
			}

			return specialized_output;
		}

		void SetValue(const std::vector<VariableReference>& cs);
		void Add(const std::vector<VariableReference>& variables);

		std::vector<std::string> GetStringValues() const
		{
			return values_string;
		}
		
		std::vector<Variable*> GetValues() const
		{
			return values;
		}

		std::string GetParent()
		{
			return parent;
		}

		std::string GetScope()
		{
			return scope;
		}

		void Clear()
		{
			values.clear();
			values_string.clear();
		}
	};
}

#endif // DST_TYPE_IR_VARIABLE_H