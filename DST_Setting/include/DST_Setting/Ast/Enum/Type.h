#ifndef DST_Setting_AST_ENUM_TYPE_H
#define DST_Setting_AST_ENUM_TYPE_H

namespace DST_Setting { namespace ast {

	enum class Type
	{
		// Terminals
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
		OTHER,

		// Non-Terminals
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
	};

}}

#endif // DST_Setting_AST_ENUM_TYPE_H
