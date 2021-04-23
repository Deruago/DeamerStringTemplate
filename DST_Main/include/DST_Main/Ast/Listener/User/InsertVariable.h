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
		/*mutable std::map<std::string, std::string> variableReplacements;
		mutable std::string output;*/

		DST::type::ir::Construction* construction;
		mutable std::string variable;
		mutable std::string scope;

		mutable std::string current_varname = "";
		mutable std::string current_scope = "";

		mutable std::vector<DST::type::ir::VariableReference> reference;
	public:
		/*InsertVariable(const std::map<std::string, std::string>& variableReplacements_)
			: variableReplacements(variableReplacements_)
		{
		}*/

		InsertVariable(DST::type::ir::Construction* construction_, std::string variable_, std::string scope_ )
			: construction(construction_), variable(std::move(variable_)), scope(std::move(scope_))
		{
		}
		InsertVariable(DST::type::ir::Construction* construction_)
			: construction(construction_), variable("file"), scope(".content")
		{
			construction->CreateVariableDefinition(variable, scope, {});
		}
		
		~InsertVariable() override = default;

	public:
		/*void Listen(const DST_Main::ast::node::variable_insertion* node) const override
		{
			const std::string variable_name =
				node->Get(DST_Main::ast::Type::VARNAME)[0]->GetValue();
			const std::string replacement = variableReplacements[variable_name];
			
			output += replacement;
		}

		void Listen(const DST_Main::ast::node::other_symbols* node) const override
		{
			output += node->GetNodes()[0]->GetValue();
		}

		std::string GetOutput() const
		{
			return output;
		}*/
	public:
		void UpdateReferences() const
		{
			if (!current_varname.empty())
			{
				reference.push_back(
					construction->GetVariableDefinition(current_varname, current_scope));

				current_varname = "";
				current_scope = "";
			}
		}

		void Listen(const DST_Main::ast::node::stmt* node) const override
		{
			UpdateReferences();
		}
		
		void Listen(const DST_Main::ast::node::variable* node) const override
		{
			const std::string variable_name =
				node->Get(DST_Main::ast::Type::VARNAME)[0]->GetValue();

			current_varname = variable_name;
		}

		void Listen(const DST_Main::ast::node::scope* node) const override
		{
			const std::string scope_name =
				node->Get(DST_Main::ast::Type::VARNAME)[0]->GetValue();
			
			current_scope += "." + scope_name;
		}

		void Listen(const DST_Main::ast::node::other_symbols* node) const override
		{
			reference.push_back(node->GetNodes()[0]->GetValue());
		}

		void End() const
		{
			UpdateReferences();
			construction->CreateVariableDefinition(variable, scope, reference);
		}
	};
}

#endif // DST_MAIN_AST_LISTENER_USER_INSERTVARIABLE_H