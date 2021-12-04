#ifndef DST_MAIN_AST_RELATION_NODEISNONTERMINAL_H
#define DST_MAIN_AST_RELATION_NODEISNONTERMINAL_H

#include "DST_Main/Ast/Enum/Type.h"

namespace DST_Main { namespace ast { namespace relation { 

	constexpr static bool NodeIsNonTerminal(::DST_Main::ast::Type t)
	{
		
		if (t == ::DST_Main::ast::Type::program)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::stmts)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::stmt)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::variable_insertion)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::other_symbols)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::variable)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::scope)
		{
			return true;
		}


		return false;
	}


}}}

#endif // DST_MAIN_AST_RELATION_NODEISNONTERMINAL_H