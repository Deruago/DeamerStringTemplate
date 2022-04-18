#ifndef DST_MAIN_AST_ENUM_TYPE_H
#define DST_MAIN_AST_ENUM_TYPE_H

#include <cstddef>

namespace DST_Main { namespace ast { 

	enum class Type : std::size_t
	{
		// Reserved
		deamerreserved_unknown,

		// Terminal
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


		// NonTerminal
		program,
		stmts,
		stmt,
		variable_insertion,
		other_symbols,
		variable,
		scope,

	};

	static inline bool operator==(std::size_t lhs, ::DST_Main::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::DST_Main::ast::Type lhs, std::size_t rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}

	static inline bool operator==(int lhs, ::DST_Main::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::DST_Main::ast::Type lhs, int rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}
}}

#endif // DST_MAIN_AST_ENUM_TYPE_H