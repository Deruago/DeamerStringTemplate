#ifndef DST_AST_RELATION_NODEENUMTOTEXT_H
#define DST_AST_RELATION_NODEENUMTOTEXT_H

#include "DST/Ast/Enum/Type.h"

namespace DST { namespace ast { namespace relation { 

	static constexpr const char* ConvertEnumToText(::DST::ast::Type type)
	{
		switch(type)
		{
			
	case ::DST::ast::Type::program: {
		return "program";
	}
	

	case ::DST::ast::Type::deamerreserved_star__ANY__: {
		return "deamerreserved_star__ANY__";
	}
	

	case ::DST::ast::Type::ANY: {
		return "ANY";
	}
	

		}
		
		return "";
	}

}}}

#endif // DST_AST_RELATION_NODEENUMTOTEXT_H