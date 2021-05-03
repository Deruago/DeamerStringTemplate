#include "DST/Type/IR/Variable.h"
#include "DST/Type/IR/VariableReference.h"

DST::type::ir::Variable::Variable(const std::vector<VariableReference>& vector)
{
	std::vector<Variable*> new_variables;
	
	for (auto variable : vector)
	{
		if (variable.NewlyCreated())
		{
			own_created_variables.push_back(variable.GetVariable());
		}

		new_variables.push_back(variable.GetVariable());
	}
	values = new_variables;
}

void DST::type::ir::Variable::SetValue(const std::vector<VariableReference>& cs)
{
	std::vector<Variable*> new_variables;
	for (const auto& reference : cs)
	{
		if (reference.NewlyCreated())
		{
			own_created_variables.push_back(reference.GetVariable());
		}

		new_variables.push_back(reference.GetVariable());
	}
	
	values = new_variables;
}

void DST::type::ir::Variable::Add(const std::vector<VariableReference>& variables)
{
	for (auto variable : variables)
	{
		values.push_back(variable.GetVariable());
	}
}
