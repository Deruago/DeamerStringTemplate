#ifndef DST_Setting_AST_NODE_ALTERNATE_FIELD_2_5_3_H
#define DST_Setting_AST_NODE_ALTERNATE_FIELD_2_5_3_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class ALTERNATE_FIELD_2_5_3 : public DST_Setting<ALTERNATE_FIELD_2_5_3>
	{
	private:
	public:
		ALTERNATE_FIELD_2_5_3(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<ALTERNATE_FIELD_2_5_3>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_ALTERNATE_FIELD_2_5_3_H
