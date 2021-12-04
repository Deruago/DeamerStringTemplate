#ifndef DST_Setting_AST_NODE_ALTERNATE_FIELD_1_1_H
#define DST_Setting_AST_NODE_ALTERNATE_FIELD_1_1_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class ALTERNATE_FIELD_1_1 : public DST_Setting<ALTERNATE_FIELD_1_1>
	{
	private:
	public:
		ALTERNATE_FIELD_1_1(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<ALTERNATE_FIELD_1_1>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_ALTERNATE_FIELD_1_1_H
