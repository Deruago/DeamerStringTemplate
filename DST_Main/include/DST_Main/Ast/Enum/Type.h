#ifndef DST_Main_AST_ENUM_TYPE_H
#define DST_Main_AST_ENUM_TYPE_H

namespace DST_Main { namespace ast {

	enum class Type
	{
		// Reserved
		deamerreserved_unknown,

		// Terminals
		DOT,
		LEFT_BRACKETS_ESCAPED,
		RIGHT_BRACKETS_ESCAPED,
		LEFT_BRACKETS,
		RIGHT_BRACKETS,
		LEFT_BRACKET,
		RIGHT_BRACKET,
		VARNAME,
		BACKSLASH,
		OTHER,

		// Non-Terminals
		program,
		stmts,
		stmt,
		variable_insertion,
		other_symbols,
		variable,
		scope,
	};

}}

#endif // DST_Main_AST_ENUM_TYPE_H
