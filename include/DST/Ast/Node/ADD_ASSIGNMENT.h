#ifndef DST_AST_NODE_ADD_ASSIGNMENT_H
#define DST_AST_NODE_ADD_ASSIGNMENT_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class ADD_ASSIGNMENT : public DST<ADD_ASSIGNMENT>
	{
	private:
	public:
		ADD_ASSIGNMENT(deamer::external::cpp::ast::NodeInformation information_)
		: DST<ADD_ASSIGNMENT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_ADD_ASSIGNMENT_H
