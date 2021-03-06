#ifndef DST_AST_NODE_LEFT_BRACKETS_H
#define DST_AST_NODE_LEFT_BRACKETS_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class LEFT_BRACKETS : public DST<LEFT_BRACKETS>
	{
	private:
	public:
		LEFT_BRACKETS(deamer::external::cpp::ast::NodeInformation information_)
		: DST<LEFT_BRACKETS>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_LEFT_BRACKETS_H
