#ifndef DST_MAIN_AST_RELATION_NODEISTERMINAL_H
#define DST_MAIN_AST_RELATION_NODEISTERMINAL_H

#include "DST_Main/Ast/Enum/Type.h"

namespace DST_Main { namespace ast { namespace relation { 

	constexpr static bool NodeIsTerminal(::DST_Main::ast::Type t)
	{
		
		if (t == ::DST_Main::ast::Type::DOT)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::LEFT_BRACKETS)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::RIGHT_BRACKETS)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::LEFT_BRACKET)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::RIGHT_BRACKET)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::VARNAME)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::BACKSLASH)
		{
			return true;
		}

		if (t == ::DST_Main::ast::Type::OTHER)
		{
			return true;
		}


		return false;
	}


}}}

#endif // DST_MAIN_AST_RELATION_NODEISTERMINAL_H