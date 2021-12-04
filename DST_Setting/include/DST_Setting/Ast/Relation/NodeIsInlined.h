#ifndef DST_SETTING_AST_RELATION_NODEISINLINED_H
#define DST_SETTING_AST_RELATION_NODEISINLINED_H

#include "DST_Setting/Ast/Enum/Type.h"

namespace DST_Setting { namespace ast { namespace relation { 

	constexpr static bool NodeIsInlined(::DST_Setting::ast::Type t)
	{
		
		if (t == ::DST_Setting::ast::Type::program)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::stmts)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::stmt)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::abstraction)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::special)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::variable_declaration)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::main_assignment)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::keyword_assignment)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::scope)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::dst_keyword)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::user_keyword)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::alternative_field_nt_1)
		{
			return false;
		}

		if (t == ::DST_Setting::ast::Type::alternative_field_nt_2)
		{
			return false;
		}


		return false;
	}


}}}

#endif // DST_SETTING_AST_RELATION_NODEISINLINED_H