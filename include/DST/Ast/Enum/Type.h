#ifndef DST_AST_ENUM_TYPE_H
#define DST_AST_ENUM_TYPE_H

namespace DST { namespace ast {

	enum class Type
	{
		// Reserved
		deamerreserved_unknown,

		// Terminals
		ANY,

		// Non-Terminals
		program,
		deamerreserved_star__ANY__,
	};

}}

#endif // DST_AST_ENUM_TYPE_H
