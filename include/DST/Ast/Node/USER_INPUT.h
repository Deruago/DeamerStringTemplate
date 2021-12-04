#ifndef DST_AST_NODE_USER_INPUT_H
#define DST_AST_NODE_USER_INPUT_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class USER_INPUT : public DST<USER_INPUT>
	{
	private:
	public:
		USER_INPUT(deamer::external::cpp::ast::NodeInformation information_)
		: DST<USER_INPUT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_USER_INPUT_H
