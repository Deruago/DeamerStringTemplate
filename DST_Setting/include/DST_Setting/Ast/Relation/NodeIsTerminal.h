#ifndef DST_SETTING_AST_RELATION_NODEISTERMINAL_H
#define DST_SETTING_AST_RELATION_NODEISTERMINAL_H

#include "DST_Setting/Ast/Enum/Type.h"

namespace DST_Setting { namespace ast { namespace relation { 

	constexpr static bool NodeIsTerminal(::DST_Setting::ast::Type t)
	{
		
		if (t == ::DST_Setting::ast::Type::LEFT_BRACKETS)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::RIGHT_BRACKETS)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::DOT)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ADD_ASSIGNMENT)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::EQUAL)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::INVALID)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::USER_INPUT)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::VARNAME)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5)
		{
			return true;
		}

		if (t == ::DST_Setting::ast::Type::OTHER)
		{
			return true;
		}


		return false;
	}


}}}

#endif // DST_SETTING_AST_RELATION_NODEISTERMINAL_H