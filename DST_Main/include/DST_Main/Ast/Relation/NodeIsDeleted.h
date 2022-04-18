#ifndef DST_MAIN_AST_RELATION_NODEISDELETED_H
#define DST_MAIN_AST_RELATION_NODEISDELETED_H

#include "DST_Main/Ast/Enum/Type.h"

namespace DST_Main { namespace ast { namespace relation { 

	constexpr static bool NodeIsDeleted(::DST_Main::ast::Type t)
	{
		
		if (t == ::DST_Main::ast::Type::DOT)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::LEFT_BRACKETS)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::RIGHT_BRACKETS)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::LEFT_BRACKET)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::RIGHT_BRACKET)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::VARNAME)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::BACKSLASH)
		{
			return false;
		}

		if (t == ::DST_Main::ast::Type::OTHER)
		{
			return false;
		}


		return false;
	}


}}}

#endif // DST_MAIN_AST_RELATION_NODEISDELETED_H