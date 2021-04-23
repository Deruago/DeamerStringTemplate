#ifndef DST_TYPE_IR_VARIABLEREFERENCE_H
#define DST_TYPE_IR_VARIABLEREFERENCE_H

#include "DST/Type/IR/Variable.h"
#include <utility>

namespace DST::type::ir
{
	class VariableReference
	{
	private:
		Variable* variable;
		bool new_created = false;
	public:
		VariableReference(std::string value)
			: variable(new Variable(value)), new_created(true)
		{
		}

		VariableReference(const Variable& value) : variable(new Variable(value)), new_created(true)
		{
		}

		VariableReference(Variable* value) : variable(value)
		{
		}

	public:
		bool NewlyCreated() const
		{
			return new_created;
		}

		Variable* GetVariable() const
		{
			return variable;
		}
		
	};
}

#endif // DST_TYPE_IR_VARIABLEREFERENCE_H