#ifndef DST_AST_NODE_ANY_H
#define DST_AST_NODE_ANY_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class ANY : public DST<ANY>
	{
	private:
	public:
		ANY(deamer::external::cpp::ast::NodeInformation information_)
		: DST<ANY>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_ANY_H
