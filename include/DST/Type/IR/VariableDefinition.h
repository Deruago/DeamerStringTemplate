#ifndef DST_TYPE_IR_VARIABLEDEFINITION_H
#define DST_TYPE_IR_VARIABLEDEFINITION_H

#include "DST/Type/IR/Variable.h"
#include <map>
#include <string>
#include <utility>

#include "VariableReference.h"

namespace DST::type::ir
{
	class VariableDefinition : public Variable
	{
	private:
		std::map<std::string, Variable*> variables;
	public:
		void StandardScopes()
		{
			// Default scopes
			SetValueOfScope("", {});
			
			SetValueOfScope(".Default", {GetScope("")});

			SetValueOfScope(".Variable_Field", { GetScope("") });
			SetValueOfScope(".Variable_Field_Separator", { "\n" });
			SetValueOfScope(".Function_Field", { GetScope("") });
			SetValueOfScope(".Function_Field_Separator", { "\n" });

			
			SetValueOfScope(".Name", {GetScope("")});

			SetValueOfScope(".Upper", {GetScope("")});
			SetValueOfScope(".Lower", {GetScope("")});
			
			SetValueOfScope(".Pascal", {GetScope("")});
			SetValueOfScope(".Camel", {GetScope("")});
			SetValueOfScope(".Snake", {GetScope("")});
		}

		std::map<std::string, Variable*> GetScopes() const
		{
			return variables;
		}

		VariableDefinition(std::string values_, std::string varname_ = "") : Variable(std::move(values_), "", varname_)
		{
			StandardScopes();
		}

		VariableDefinition(std::vector<std::string> values_) : Variable(std::move(values_))
		{
			StandardScopes();
		}

		VariableDefinition(Variable* values_) : Variable(values_)
		{
			StandardScopes();
		}

		VariableDefinition(std::vector<Variable*> values_) : Variable(std::move(values_))
		{
			StandardScopes();
		}

		VariableDefinition(const std::vector<VariableReference>& vector) : Variable(vector)
		{
			StandardScopes();
		}

		~VariableDefinition() override
		{
			for (auto [key, variable] : variables)
			{
				//delete variable;
			}
		}

		VariableDefinition& operator=(const VariableDefinition& rhs)
		{
			if (&rhs == this)
			{
				return *this;
			}
			
			values_string = rhs.values_string;
			values = rhs.values;
			for (auto* variable : rhs.own_created_variables)
			{
				own_created_variables.push_back(variable);			
			}
			
			variables = rhs.variables;

			return *this;
		}

		void AddScope(const std::string& scope)
		{
			variables[scope] = new Variable(scope, "", parent);
		}

		void SetValueOfScope(const std::string& scope, const std::vector<VariableReference>& value)
		{
			GetScope(scope)->SetValue(value);
		}
		
		Variable* GetScope(const std::string& scope)
		{
			const auto value = variables.find(scope);
			if (value == variables.end())
			{
				AddScope(scope);
				return GetScope(scope);
			}

			// Check if Default is valid
			if (scope == "Default")
			{
			}

			return value->second;
		}
	};
}

#endif // DST_TYPE_IR_VARIABLEDEFINITION_H