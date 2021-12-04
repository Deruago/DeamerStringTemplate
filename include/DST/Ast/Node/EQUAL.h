#ifndef DST_AST_NODE_EQUAL_H
#define DST_AST_NODE_EQUAL_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class EQUAL : public DST<EQUAL>
	{
	private:
	public:
		EQUAL(deamer::external::cpp::ast::NodeInformation information_)
		: DST<EQUAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_EQUAL_H
