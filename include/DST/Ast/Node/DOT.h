#ifndef DST_AST_NODE_DOT_H
#define DST_AST_NODE_DOT_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class DOT : public DST<DOT>
	{
	private:
	public:
		DOT(deamer::external::cpp::ast::NodeInformation information_)
		: DST<DOT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_DOT_H
