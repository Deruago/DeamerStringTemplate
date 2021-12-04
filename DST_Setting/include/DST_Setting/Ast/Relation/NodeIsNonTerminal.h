#ifndef DST_SETTING_AST_RELATION_NODEISNONTERMINAL_H
#define DST_SETTING_AST_RELATION_NODEISNONTERMINAL_H

#include "DST_Setting/Ast/Enum/Type.h"

namespace DST_Setting { namespace ast { namespace relation { 

	constexpr static bool NodeIsNonTerminal(::DST_Setting::ast::Type t)
	{
		
		if (t == ::DST_Setting::ast::Type::program)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::stmts)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::stmt)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::abstraction)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::special)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::variable_declaration)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::main_assignment)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::keyword_assignment)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::scope)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::dst_keyword)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::user_keyword)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::alternative_field_nt_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::alternative_field_nt_2)
		{
			return true;
		}


		return false;
	}


}}}

#endif // DST_SETTING_AST_RELATION_NODEISNONTERMINAL_H