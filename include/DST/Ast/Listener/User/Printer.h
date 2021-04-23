#ifndef DST_AST_LISTENER_USER_PRINTER_H
#define DST_AST_LISTENER_USER_PRINTER_H

#include "DST/Ast/Listener/Listener.h"

namespace DST::ast::listener::user
{
	class Printer : public Listener
	{
	public:
		Printer() = default;
		~Printer() override = default;
	public:
		void Listen(const DST::ast::node::variable_insertion* node) const override
		{
			std::cout	<< "Variable insertion point found!\n"
						<< "\tVariable := " << node->Get(DST::ast::Type::VARNAME)[0]->GetValue() + "\n\n";
		}

		void Listen(const DST::ast::node::other_symbols* node) const override
		{
			std::cout	<< "Other symbol found!\n"
						<< "\t" + node->GetNodes()[0]->GetValue() + "\n\n";
		}
	};
}

#endif // DST_AST_LISTENER_USER_PRINTER_H