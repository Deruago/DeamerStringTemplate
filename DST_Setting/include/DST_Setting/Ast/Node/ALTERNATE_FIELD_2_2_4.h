#ifndef DST_Setting_AST_NODE_ALTERNATE_FIELD_2_2_4_H
#define DST_Setting_AST_NODE_ALTERNATE_FIELD_2_2_4_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class ALTERNATE_FIELD_2_2_4 : public DST_Setting<ALTERNATE_FIELD_2_2_4>
	{
	private:
	public:
		ALTERNATE_FIELD_2_2_4(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<ALTERNATE_FIELD_2_2_4>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_ALTERNATE_FIELD_2_2_4_H
