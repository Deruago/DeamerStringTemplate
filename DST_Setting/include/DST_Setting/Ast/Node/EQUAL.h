#ifndef DST_Setting_AST_NODE_EQUAL_H
#define DST_Setting_AST_NODE_EQUAL_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class EQUAL : public DST_Setting<EQUAL>
	{
	private:
	public:
		EQUAL(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<EQUAL>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_EQUAL_H
