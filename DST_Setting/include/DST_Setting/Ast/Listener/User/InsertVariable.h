#ifndef DST_SETTING_AST_LISTENER_USER_INSERTVARIABLE_H
#define DST_SETTING_AST_LISTENER_USER_INSERTVARIABLE_H

#include "DST_Setting/Ast/Listener/Listener.h"
#include "DST/Type/IR/Construction.h"
#include "DST_Main/Bison/Parser.h"
#include "DST_Main/Ast/Listener/User/InsertVariable.h"

namespace DST_Setting::ast::listener::user
{
	class InsertVariable : public DST_Setting::ast::listener::Listener
	{
	private:
		DST::type::ir::Construction* construction;
		std::string current_variable;
		std::string current_scope;
	public:
		InsertVariable(DST::type::ir::Construction* construction_)
			: construction(construction_)
		{
		}
		
		~InsertVariable() override = default;

	public:
		void Listen(const DST_Setting::ast::node::stmt* node) override
		{
			current_variable = "";
			current_scope = "";
		}
		
		void Listen(const DST_Setting::ast::node::variable_declaration* node) override
		{
			current_variable = node->Get(DST_Setting::ast::Type::VARNAME)[0]->GetValue();
		}

		void Listen(const DST_Setting::ast::node::scope* node) override
		{
			current_scope += "." + node->Get(Type::VARNAME)[0]->GetValue();
		}
		
		void Listen(const DST_Setting::ast::node::USER_INPUT* node) override
		{
			const auto DST_Main_parser = DST_Main::parser::Parser();
			auto value = node->GetValue();
			value.erase(0, 1);
			value.pop_back();

			auto* tree = DST_Main_parser.Parse(value);

			auto listener = DST_Main::ast::listener::user::InsertVariable(construction, current_variable, current_scope);
			listener.Dispatch(tree->GetStartNode());
			listener.End();

			delete tree;
		}

		void Listen(const DST_Setting::ast::node::dst_keyword* node) override
		{
			
		}
		
		std::string GetOutput() const
		{
			return "";
		}
	};
}

#endif // DST_SETTING_AST_LISTENER_USER_INSERTVARIABLE_H