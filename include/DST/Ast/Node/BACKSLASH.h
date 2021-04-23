#ifndef DST_AST_NODE_BACKSLASH_H
#define DST_AST_NODE_BACKSLASH_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class BACKSLASH : public DST<BACKSLASH>, public ::DST::ast::common::node::other_symbols
	{
	private:
	public:
		BACKSLASH(deamer::external::cpp::ast::NodeInformation information_)
		: DST<BACKSLASH>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_BACKSLASH_H
