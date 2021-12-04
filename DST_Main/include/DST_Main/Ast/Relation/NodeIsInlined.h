#ifndef DST_MAIN_AST_RELATION_NODEISINLINED_H
#define DST_MAIN_AST_RELATION_NODEISINLINED_H

#include "DST_Main/Ast/Enum/Type.h"

namespace DST_Main { namespace ast { namespace relation { 

	constexpr static bool NodeIsInlined(::DST_Main::ast::Type t)
	{
		
		if (t == ::DST_Main::ast::Type::program)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::stmts)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::stmt)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::variable_insertion)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::other_symbols)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::variable)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::scope)
		{
			return false;
		}


		return false;
	}


}}}

#endif // DST_MAIN_AST_RELATION_NODEISINLINED_H