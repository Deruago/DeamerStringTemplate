#ifndef DST_AST_RELATION_NODETEXTTOENUM_H
#define DST_AST_RELATION_NODETEXTTOENUM_H

#include "DST/Ast/Enum/Type.h"
#include <string>
#include <map>

namespace DST { namespace ast { namespace relation { 

	static constexpr ::DST::ast::Type ConvertTextToEnum(const std::string& text)
	{
		static const std::map<std::string, ::DST::ast::Type> mapTextWithType = {
			{"", ::DST::ast::Type::deamerreserved_unknown },
			
		{ "program", ::DST::ast::Type::program },
	

		{ "deamerreserved_star__ANY__", ::DST::ast::Type::deamerreserved_star__ANY__ },
	

		{ "ANY", ::DST::ast::Type::ANY },
	

		};

		return mapTextWithType[text];
	}

}}}

#endif // DST_AST_RELATION_NODETEXTTOENUM_H