#ifndef DST_AST_NODE_VARNAME_H
#define DST_AST_NODE_VARNAME_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class VARNAME : public DST<VARNAME>
	{
	private:
	public:
		VARNAME(deamer::external::cpp::ast::NodeInformation information_)
		: DST<VARNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_VARNAME_H
