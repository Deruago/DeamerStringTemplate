#ifndef DST_AST_NODE_ALTERNATE_FIELD_2_3_4_H
#define DST_AST_NODE_ALTERNATE_FIELD_2_3_4_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class ALTERNATE_FIELD_2_3_4 : public DST<ALTERNATE_FIELD_2_3_4>
	{
	private:
	public:
		ALTERNATE_FIELD_2_3_4(deamer::external::cpp::ast::NodeInformation information_)
		: DST<ALTERNATE_FIELD_2_3_4>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_ALTERNATE_FIELD_2_3_4_H
