#ifndef DST_SETTING_AST_RELATION_NODETEXTTOENUM_H
#define DST_SETTING_AST_RELATION_NODETEXTTOENUM_H

#include "DST_Setting/Ast/Enum/Type.h"
#include <string>
#include <map>

namespace DST_Setting { namespace ast { namespace relation { 

	static constexpr ::DST_Setting::ast::Type ConvertTextToEnum(const std::string& text)
	{
		static const std::map<std::string, ::DST_Setting::ast::Type> mapTextWithType = {
			{"", ::DST_Setting::ast::Type::deamerreserved_unknown },
			
		{ "program", ::DST_Setting::ast::Type::program },
	

		{ "stmts", ::DST_Setting::ast::Type::stmts },
	

		{ "stmt", ::DST_Setting::ast::Type::stmt },
	

		{ "abstraction", ::DST_Setting::ast::Type::abstraction },
	

		{ "special", ::DST_Setting::ast::Type::special },
	

		{ "variable_declaration", ::DST_Setting::ast::Type::variable_declaration },
	

		{ "main_assignment", ::DST_Setting::ast::Type::main_assignment },
	

		{ "keyword_assignment", ::DST_Setting::ast::Type::keyword_assignment },
	

		{ "scope", ::DST_Setting::ast::Type::scope },
	

		{ "dst_keyword", ::DST_Setting::ast::Type::dst_keyword },
	

		{ "user_keyword", ::DST_Setting::ast::Type::user_keyword },
	

		{ "alternative_field_nt_1", ::DST_Setting::ast::Type::alternative_field_nt_1 },
	

		{ "alternative_field_nt_2", ::DST_Setting::ast::Type::alternative_field_nt_2 },
	

		{ "LEFT_BRACKETS", ::DST_Setting::ast::Type::LEFT_BRACKETS },
	

		{ "RIGHT_BRACKETS", ::DST_Setting::ast::Type::RIGHT_BRACKETS },
	

		{ "DOT", ::DST_Setting::ast::Type::DOT },
	

		{ "ADD_ASSIGNMENT", ::DST_Setting::ast::Type::ADD_ASSIGNMENT },
	

		{ "EQUAL", ::DST_Setting::ast::Type::EQUAL },
	

		{ "INVALID", ::DST_Setting::ast::Type::INVALID },
	

		{ "LEFT_SQUARE_BRACKET", ::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET },
	

		{ "RIGHT_SQUARE_BRACKET", ::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET },
	

		{ "USER_INPUT", ::DST_Setting::ast::Type::USER_INPUT },
	

		{ "VARNAME", ::DST_Setting::ast::Type::VARNAME },
	

		{ "ALTERNATE_FIELD_1_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0 },
	

		{ "ALTERNATE_FIELD_1_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1 },
	

		{ "ALTERNATE_FIELD_1_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2 },
	

		{ "ALTERNATE_FIELD_1_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3 },
	

		{ "ALTERNATE_FIELD_1_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4 },
	

		{ "ALTERNATE_FIELD_1_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5 },
	

		{ "ALTERNATE_FIELD_2_0_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0 },
	

		{ "ALTERNATE_FIELD_2_0_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1 },
	

		{ "ALTERNATE_FIELD_2_0_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2 },
	

		{ "ALTERNATE_FIELD_2_0_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3 },
	

		{ "ALTERNATE_FIELD_2_0_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4 },
	

		{ "ALTERNATE_FIELD_2_0_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5 },
	

		{ "ALTERNATE_FIELD_2_1_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0 },
	

		{ "ALTERNATE_FIELD_2_1_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1 },
	

		{ "ALTERNATE_FIELD_2_1_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2 },
	

		{ "ALTERNATE_FIELD_2_1_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3 },
	

		{ "ALTERNATE_FIELD_2_1_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4 },
	

		{ "ALTERNATE_FIELD_2_1_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5 },
	

		{ "ALTERNATE_FIELD_2_2_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0 },
	

		{ "ALTERNATE_FIELD_2_2_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1 },
	

		{ "ALTERNATE_FIELD_2_2_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2 },
	

		{ "ALTERNATE_FIELD_2_2_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3 },
	

		{ "ALTERNATE_FIELD_2_2_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4 },
	

		{ "ALTERNATE_FIELD_2_2_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5 },
	

		{ "ALTERNATE_FIELD_2_3_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0 },
	

		{ "ALTERNATE_FIELD_2_3_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1 },
	

		{ "ALTERNATE_FIELD_2_3_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2 },
	

		{ "ALTERNATE_FIELD_2_3_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3 },
	

		{ "ALTERNATE_FIELD_2_3_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4 },
	

		{ "ALTERNATE_FIELD_2_3_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5 },
	

		{ "ALTERNATE_FIELD_2_4_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0 },
	

		{ "ALTERNATE_FIELD_2_4_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1 },
	

		{ "ALTERNATE_FIELD_2_4_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2 },
	

		{ "ALTERNATE_FIELD_2_4_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3 },
	

		{ "ALTERNATE_FIELD_2_4_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4 },
	

		{ "ALTERNATE_FIELD_2_4_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5 },
	

		{ "ALTERNATE_FIELD_2_5_0", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0 },
	

		{ "ALTERNATE_FIELD_2_5_1", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1 },
	

		{ "ALTERNATE_FIELD_2_5_2", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2 },
	

		{ "ALTERNATE_FIELD_2_5_3", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3 },
	

		{ "ALTERNATE_FIELD_2_5_4", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4 },
	

		{ "ALTERNATE_FIELD_2_5_5", ::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5 },
	

		{ "OTHER", ::DST_Setting::ast::Type::OTHER },
	

		};

		return mapTextWithType[text];
	}

}}}

#endif // DST_SETTING_AST_RELATION_NODETEXTTOENUM_H