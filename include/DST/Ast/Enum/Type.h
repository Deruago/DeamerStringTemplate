#ifndef DST_AST_ENUM_TYPE_H
#define DST_AST_ENUM_TYPE_H

namespace DST { namespace ast {

	enum class Type
	{
		// Terminals
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
	};

}}

#endif // DST_AST_ENUM_TYPE_H
