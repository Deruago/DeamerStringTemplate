#ifndef DST_AST_NODE_ALTERNATE_FIELD_2_3_5_H
#define DST_AST_NODE_ALTERNATE_FIELD_2_3_5_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class ALTERNATE_FIELD_2_3_5 : public DST<ALTERNATE_FIELD_2_3_5>
	{
	private:
	public:
		ALTERNATE_FIELD_2_3_5(deamer::external::cpp::ast::NodeInformation information_)
		: DST<ALTERNATE_FIELD_2_3_5>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_ALTERNATE_FIELD_2_3_5_H
