#ifndef DST_AST_ENUM_TYPE_H
#define DST_AST_ENUM_TYPE_H

#include <cstddef>

namespace DST { namespace ast { 

	enum class Type : std::size_t
	{
		// Reserved
		deamerreserved_unknown,

		// Terminal
		ANY,


		// NonTerminal
		program,
		deamerreserved_star__ANY__,

	};

	static inline bool operator==(std::size_t lhs, ::DST::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::DST::ast::Type lhs, std::size_t rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}

	static inline bool operator==(int lhs, ::DST::ast::Type rhs)
	{
		return lhs == static_cast<std::size_t>(rhs);
	}

	static inline bool operator==(::DST::ast::Type lhs, int rhs)
	{
		return static_cast<std::size_t>(lhs) == rhs;
	}
}}

#endif // DST_AST_ENUM_TYPE_H