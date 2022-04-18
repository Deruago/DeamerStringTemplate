#ifndef DST_AST_RELATION_NODEISDELETED_H
#define DST_AST_RELATION_NODEISDELETED_H

#include "DST/Ast/Enum/Type.h"

namespace DST { namespace ast { namespace relation { 

	constexpr static bool NodeIsDeleted(::DST::ast::Type t)
	{
		
		if (t == ::DST::ast::Type::ANY)
		{
			return false;
		}


		return false;
	}


}}}

#endif // DST_AST_RELATION_NODEISDELETED_H