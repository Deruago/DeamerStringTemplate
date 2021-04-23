#ifndef DST_Setting_AST_NODE_ADD_ASSIGNMENT_H
#define DST_Setting_AST_NODE_ADD_ASSIGNMENT_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class ADD_ASSIGNMENT : public DST_Setting<ADD_ASSIGNMENT>
	{
	private:
	public:
		ADD_ASSIGNMENT(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<ADD_ASSIGNMENT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_ADD_ASSIGNMENT_H
