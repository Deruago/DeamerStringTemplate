#ifndef DST_SETTING_AST_ENUM_TYPE_H
#define DST_SETTING_AST_ENUM_TYPE_H

#include <cstddef>

namespace DST_Setting { namespace ast { 

	enum class Type : std::size_t
	{
		// Reserved
		deamerreserved_unknown,

		// Terminal
		LEFT_BRACKETS,
		RIGHT_BRACKETS,
		DOT,
		ADD_ASSIGNMENT,
		EQUAL,
		INVALID,
		LEFT_SQUARE_BRACKET,
		RIGHT_SQUARE_BRACKET,
		USER_INPUT,
		VARNAME,
		ALTERNATE_FIELD_1_0,
		ALTERNATE_FIELD_1_1,
		ALTERNATE_FIELD_1_2,
		ALTERNATE_FIELD_1_3,
		ALTERNATE_FIELD_1_4,
		ALTERNATE_FIELD_1_5,
		ALTERNATE_FIELD_2_0_0,
		ALTERNATE_FIELD_2_0_1,
		ALTERNATE_FIELD_2_0_2,
		ALTERNATE_FIELD_2_0_3,
		ALTERNATE_FIELD_2_0_4,
		ALTERNATE_FIELD_2_0_5,
		ALTERNATE_FIELD_2_1_0,
		ALTERNATE_FIELD_2_1_1,
		ALTERNATE_FIELD_2_1_2,
		ALTERNATE_FIELD_2_1_3,
		ALTERNATE_FIELD_2_1_4,
		ALTERNATE_FIELD_2_1_5,
		ALTERNATE_FIELD_2_2_0,
		ALTERNATE_FIELD_2_2_1,
		ALTERNATE_FIELD_2_2_2,
		ALTERNATE_FIELD_2_2_3,
		ALTERNATE_FIELD_2_2_4,
		ALTERNATE_FIELD_2_2_5,
		ALTERNATE_FIELD_2_3_0,
		ALTERNATE_FIELD_2_3_1,
		ALTERNATE_FIELD_2_3_2,
		ALTERNATE_FIELD_2_3_3,
		ALTERNATE_FIELD_2_3_4,
		ALTERNATE_FIELD_2_3_5,
		ALTERNATE_FIELD_2_4_0,
		ALTERNATE_FIELD_2_4_1,
		ALTERNATE_FIELD_2_4_2,
		ALTERNATE_FIELD_2_4_3,
		ALTERNATE_FIELD_2_4_4,
		ALTERNATE_FIELD_2_4_5,
		ALTERNATE_FIELD_2_5_0,
		ALTERNATE_FIELD_2_5_1,
		ALTERNATE_FIELD_2_5_2,
		ALTERNATE_FIELD_2_5_3,
		ALTERNATE_FIELD_2_5_4,
		ALTERNATE_FIELD_2_5_5,
		OTHER,


		// NonTerminal
		program,
		stmts,
		stmt,
		abstraction,
		special,
		variable_declaration,
		main_assignment,
		keyword_assignment,
		scope,
		dst_keyword,
		user_keyword,
		alternative_field_nt_1,
		alternative_field_nt_2,

	};

	static inline bool operator==(std::size_t lhs, ::DST_Setting::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::DST_Setting::ast::Type lhs, std::size_t rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}

	static inline bool operator==(int lhs, ::DST_Setting::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::DST_Setting::ast::Type lhs, int rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}
}}

#endif // DST_SETTING_AST_ENUM_TYPE_H