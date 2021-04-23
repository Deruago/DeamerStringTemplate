#ifndef DST_AST_NODE_OTHER_H
#define DST_AST_NODE_OTHER_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class OTHER : public DST<OTHER>, public ::DST::ast::common::node::other_symbols
	{
	private:
	public:
		OTHER(deamer::external::cpp::ast::NodeInformation information_)
		: DST<OTHER>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_OTHER_H
