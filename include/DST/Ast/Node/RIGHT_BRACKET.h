#ifndef DST_AST_NODE_RIGHT_BRACKET_H
#define DST_AST_NODE_RIGHT_BRACKET_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class RIGHT_BRACKET : public DST<RIGHT_BRACKET>, public ::DST::ast::common::node::other_symbols
	{
	private:
	public:
		RIGHT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: DST<RIGHT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_RIGHT_BRACKET_H
