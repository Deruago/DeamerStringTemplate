#ifndef DST_AST_LISTENER_USER_INSERTVARIABLE_H
#define DST_AST_LISTENER_USER_INSERTVARIABLE_H

#include "DST/Ast/Listener/Listener.h"
#include <map>

namespace DST::ast::listener::user
{
	class InsertVariable : public Listener
	{
	private:
		mutable std::map<std::string, std::string> variableReplacements;
		mutable std::string output;
	public:
		InsertVariable(const std::map<std::string, std::string>& variableReplacements_)
			: variableReplacements(variableReplacements_)
		{
		}
		~InsertVariable() override = default;

	public:
		void Listen(const DST::ast::node::variable_insertion* node) const override
		{
			const std::string variable_name = node->Get(DST::ast::Type::VARNAME)[0]->GetValue();
			const std::string replacement = variableReplacements[variable_name];
			
			output += replacement;
		}

		void Listen(const DST::ast::node::other_symbols* node) const override
		{
			output += node->GetNodes()[0]->GetValue();
		}

		std::string GetOutput() const
		{
			return output;
		}
	};
}

#endif // DST_AST_LISTENER_USER_INSERTVARIABLE_H