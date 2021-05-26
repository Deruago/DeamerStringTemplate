#ifndef DST_MAIN_AST_LISTENER_USER_INSERTVARIABLE_H
#define DST_MAIN_AST_LISTENER_USER_INSERTVARIABLE_H

#include "DST_Main/Ast/Listener/Listener.h"
#include "DST/Type/IR/Construction.h"
#include <map>
#include <utility>

namespace DST_Main::ast::listener::user
{
	class InsertVariable : public DST_Main::ast::listener::Listener
	{
	private:
		DST::type::ir::Construction* construction;
		std::string variable;
		std::string scope;

		std::string current_varname = "";
		std::string current_scope = "";

		std::vector<DST::type::ir::VariableReference> reference;
		
	public:
		InsertVariable(DST::type::ir::Construction* construction_, std::string variable_, std::string scope_ )
			: construction(construction_), variable(std::move(variable_)), scope(std::move(scope_))
		{
		}
		InsertVariable(DST::type::ir::Construction* construction_)
			: construction(construction_), variable("file"), scope(".Content")
		{
			construction->CreateVariableDefinition(variable, scope, {});
		}
		
		~InsertVariable() override = default;

	public:
		void UpdateReferences()
		{
			if (!current_varname.empty())
			{
				reference.emplace_back(
					construction->GetVariableDefinition(current_varname, current_scope));

				current_varname = "";
				current_scope = "";
			}
		}

		void Listen(const DST_Main::ast::node::stmt* node) override
		{
			UpdateReferences();
		}
		
		void Listen(const DST_Main::ast::node::variable* node) override
		{
			const std::string variable_name =
				node->Get(DST_Main::ast::Type::VARNAME)[0]->GetValue();

			current_varname = variable_name;
		}

		void Listen(const DST_Main::ast::node::scope* node) override
		{
			const std::string scope_name =
				node->Get(DST_Main::ast::Type::VARNAME)[0]->GetValue();
			
			current_scope += "." + scope_name;
		}

		void Listen(const DST_Main::ast::node::other_symbols* node) override
		{
			reference.emplace_back(node->GetNodes()[0]->GetValue());
		}

		void End()
		{
			UpdateReferences();
			construction->CreateVariableDefinition(variable, scope, reference);
		}
	};
}

#endif // DST_MAIN_AST_LISTENER_USER_INSERTVARIABLE_H