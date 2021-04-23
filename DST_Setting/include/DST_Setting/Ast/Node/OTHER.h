#ifndef DST_Setting_AST_NODE_OTHER_H
#define DST_Setting_AST_NODE_OTHER_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class OTHER : public DST_Setting<OTHER>
	{
	private:
	public:
		OTHER(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<OTHER>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_OTHER_H
