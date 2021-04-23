#ifndef DST_Setting_AST_NODE_USER_INPUT_H
#define DST_Setting_AST_NODE_USER_INPUT_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class USER_INPUT : public DST_Setting<USER_INPUT>
	{
	private:
	public:
		USER_INPUT(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<USER_INPUT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_USER_INPUT_H
