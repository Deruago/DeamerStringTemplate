#ifndef DST_AST_RELATION_NODEISNONTERMINAL_H
#define DST_AST_RELATION_NODEISNONTERMINAL_H

#include "DST/Ast/Enum/Type.h"

namespace DST { namespace ast { namespace relation { 

	constexpr static bool NodeIsNonTerminal(::DST::ast::Type t)
	{
		
		if (t == ::DST::ast::Type::program)
		{
			return true;
		}

		if (t == ::DST::ast::Type::deamerreserved_star__ANY__)
		{
			return true;
		}


		return false;
	}


}}}

#endif // DST_AST_RELATION_NODEISNONTERMINAL_H