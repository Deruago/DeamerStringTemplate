#ifndef DST_Setting_AST_NODE_RIGHT_BRACKETS_H
#define DST_Setting_AST_NODE_RIGHT_BRACKETS_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class RIGHT_BRACKETS : public DST_Setting<RIGHT_BRACKETS>
	{
	private:
	public:
		RIGHT_BRACKETS(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<RIGHT_BRACKETS>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_RIGHT_BRACKETS_H
