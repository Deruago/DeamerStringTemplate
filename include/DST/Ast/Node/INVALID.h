#ifndef DST_AST_NODE_INVALID_H
#define DST_AST_NODE_INVALID_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/dst_keyword.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class INVALID : public DST<INVALID>, public ::DST::ast::common::node::dst_keyword
	{
	private:
	public:
		INVALID(deamer::external::cpp::ast::NodeInformation information_)
		: DST<INVALID>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_INVALID_H
