#ifndef DST_AST_RELATION_NODEISTERMINAL_H
#define DST_AST_RELATION_NODEISTERMINAL_H

#include "DST/Ast/Enum/Type.h"

namespace DST { namespace ast { namespace relation { 

	constexpr static bool NodeIsTerminal(::DST::ast::Type t)
	{
		
		if (t == ::DST::ast::Type::ANY)
		{
			return true;
		}


		return false;
	}


}}}

#endif // DST_AST_RELATION_NODEISTERMINAL_H