#ifndef DST_TYPE_IR_CONSTRUCTION_H
#define DST_TYPE_IR_CONSTRUCTION_H

#include "DST/Type/IR/VariableDefinition.h"
#include <map>
#include <tuple>
#include <string>

namespace DST::type::ir
{
	class Construction
	{
	private:
		std::map<std::string, VariableDefinition*> variables;
	public:
		Construction()
		{
			CreateVariableDefinition("left_angle_bracket", "", { "<" });
			CreateVariableDefinition("right_angle_bracket", "", { ">" });
		}

		
		~Construction()
		{
			for (auto& [key, variable] : variables)
			{
				delete variable;
				variable = nullptr;
			}
		}
	public:
		bool IsScopeReserved(const std::string& scope)
		{
			if (scope == ".Upper" ||
				scope == ".Lower" ||
				scope == ".Name" ||
				scope == ".Pascal" ||
				scope == ".camel" ||
				scope == ".snake")
			{
				return true;
			}

			return false;
		}
		
		void CreateVariableDefinition(const std::string& text, const std::string& scope, const std::vector<VariableReference>& references)
		{
			const auto result = variables.find(text);
			if (result == variables.end())
			{
				auto* newVar = new VariableDefinition("");
				if (!IsScopeReserved(scope))
				{
					newVar->SetValueOfScope(scope, references);				
				}
				
				variables[text] = newVar;
			}
			else
			{
				if (!IsScopeReserved(scope))
				{
					GetVariableDefinition(text, scope)->SetValue(references);
				}
			}
		}

		Variable* GetVariableDefinition(const std::string& text, const std::string& scope = "")
		{
			const auto result = variables.find(text);
			if (result == variables.end())
			{
				CreateVariableDefinition(text, scope, {});
				return GetVariableDefinition(text, scope);
			}

			return result->second->GetScope(scope);

		}

		std::string Output(const std::vector<std::tuple<std::string, std::string, std::string>>& mapping = {})
		{
			for (const auto& [varname, scope, value] : mapping)
			{
				auto* newVar = new Variable(value);
				CreateVariableDefinition(varname, scope, {newVar});
			}
			
			return GetVariableDefinition("file", ".content")->GetValue();
		}

		void SetVariable(const std::string& variableName, const std::string& scope, const std::vector<VariableReference>& value)
		{
			CreateVariableDefinition(variableName, scope, value);
		}

		void ExpandVariableField(const std::string& variableName)
		{
			const auto currentValue = GetVariableDefinition(variableName, "")->GetValue();
			const auto currentSeparator = GetVariableDefinition(variableName, ".Variable_Field_Separator")->GetValue();
			
			GetVariableDefinition(variableName, ".Variable_Field")->Add({ currentValue, currentSeparator });
		}
	};
}

#endif // DST_TYPE_IR_CONSTRUCTION_H