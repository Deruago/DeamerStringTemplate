#ifndef DST_SETTING_AST_RELATION_NODEENUMTOTEXT_H
#define DST_SETTING_AST_RELATION_NODEENUMTOTEXT_H

#include "DST_Setting/Ast/Enum/Type.h"

namespace DST_Setting { namespace ast { namespace relation { 

	static constexpr const char* ConvertEnumToText(::DST_Setting::ast::Type type)
	{
		switch(type)
		{
			
	case ::DST_Setting::ast::Type::program: {
		return "program";
	}
	

	case ::DST_Setting::ast::Type::stmts: {
		return "stmts";
	}
	

	case ::DST_Setting::ast::Type::stmt: {
		return "stmt";
	}
	

	case ::DST_Setting::ast::Type::abstraction: {
		return "abstraction";
	}
	

	case ::DST_Setting::ast::Type::special: {
		return "special";
	}
	

	case ::DST_Setting::ast::Type::variable_declaration: {
		return "variable_declaration";
	}
	

	case ::DST_Setting::ast::Type::main_assignment: {
		return "main_assignment";
	}
	

	case ::DST_Setting::ast::Type::keyword_assignment: {
		return "keyword_assignment";
	}
	

	case ::DST_Setting::ast::Type::scope: {
		return "scope";
	}
	

	case ::DST_Setting::ast::Type::dst_keyword: {
		return "dst_keyword";
	}
	

	case ::DST_Setting::ast::Type::user_keyword: {
		return "user_keyword";
	}
	

	case ::DST_Setting::ast::Type::alternative_field_nt_1: {
		return "alternative_field_nt_1";
	}
	

	case ::DST_Setting::ast::Type::alternative_field_nt_2: {
		return "alternative_field_nt_2";
	}
	

	case ::DST_Setting::ast::Type::LEFT_BRACKETS: {
		return "LEFT_BRACKETS";
	}
	

	case ::DST_Setting::ast::Type::RIGHT_BRACKETS: {
		return "RIGHT_BRACKETS";
	}
	

	case ::DST_Setting::ast::Type::DOT: {
		return "DOT";
	}
	

	case ::DST_Setting::ast::Type::ADD_ASSIGNMENT: {
		return "ADD_ASSIGNMENT";
	}
	

	case ::DST_Setting::ast::Type::EQUAL: {
		return "EQUAL";
	}
	

	case ::DST_Setting::ast::Type::INVALID: {
		return "INVALID";
	}
	

	case ::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET: {
		return "LEFT_SQUARE_BRACKET";
	}
	

	case ::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET: {
		return "RIGHT_SQUARE_BRACKET";
	}
	

	case ::DST_Setting::ast::Type::USER_INPUT: {
		return "USER_INPUT";
	}
	

	case ::DST_Setting::ast::Type::VARNAME: {
		return "VARNAME";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0: {
		return "ALTERNATE_FIELD_1_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1: {
		return "ALTERNATE_FIELD_1_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2: {
		return "ALTERNATE_FIELD_1_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3: {
		return "ALTERNATE_FIELD_1_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4: {
		return "ALTERNATE_FIELD_1_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5: {
		return "ALTERNATE_FIELD_1_5";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0: {
		return "ALTERNATE_FIELD_2_0_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1: {
		return "ALTERNATE_FIELD_2_0_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2: {
		return "ALTERNATE_FIELD_2_0_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3: {
		return "ALTERNATE_FIELD_2_0_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4: {
		return "ALTERNATE_FIELD_2_0_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5: {
		return "ALTERNATE_FIELD_2_0_5";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0: {
		return "ALTERNATE_FIELD_2_1_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1: {
		return "ALTERNATE_FIELD_2_1_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2: {
		return "ALTERNATE_FIELD_2_1_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3: {
		return "ALTERNATE_FIELD_2_1_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4: {
		return "ALTERNATE_FIELD_2_1_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5: {
		return "ALTERNATE_FIELD_2_1_5";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0: {
		return "ALTERNATE_FIELD_2_2_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1: {
		return "ALTERNATE_FIELD_2_2_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2: {
		return "ALTERNATE_FIELD_2_2_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3: {
		return "ALTERNATE_FIELD_2_2_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4: {
		return "ALTERNATE_FIELD_2_2_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5: {
		return "ALTERNATE_FIELD_2_2_5";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0: {
		return "ALTERNATE_FIELD_2_3_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1: {
		return "ALTERNATE_FIELD_2_3_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2: {
		return "ALTERNATE_FIELD_2_3_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3: {
		return "ALTERNATE_FIELD_2_3_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4: {
		return "ALTERNATE_FIELD_2_3_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5: {
		return "ALTERNATE_FIELD_2_3_5";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0: {
		return "ALTERNATE_FIELD_2_4_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1: {
		return "ALTERNATE_FIELD_2_4_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2: {
		return "ALTERNATE_FIELD_2_4_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3: {
		return "ALTERNATE_FIELD_2_4_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4: {
		return "ALTERNATE_FIELD_2_4_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5: {
		return "ALTERNATE_FIELD_2_4_5";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0: {
		return "ALTERNATE_FIELD_2_5_0";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1: {
		return "ALTERNATE_FIELD_2_5_1";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2: {
		return "ALTERNATE_FIELD_2_5_2";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3: {
		return "ALTERNATE_FIELD_2_5_3";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4: {
		return "ALTERNATE_FIELD_2_5_4";
	}
	

	case ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5: {
		return "ALTERNATE_FIELD_2_5_5";
	}
	

	case ::DST_Setting::ast::Type::OTHER: {
		return "OTHER";
	}
	

		}
		
		return "";
	}

}}}

#endif // DST_SETTING_AST_RELATION_NODEENUMTOTEXT_H