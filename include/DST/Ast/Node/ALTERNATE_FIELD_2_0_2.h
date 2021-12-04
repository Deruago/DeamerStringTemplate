#ifndef DST_AST_NODE_ALTERNATE_FIELD_2_0_2_H
#define DST_AST_NODE_ALTERNATE_FIELD_2_0_2_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class ALTERNATE_FIELD_2_0_2 : public DST<ALTERNATE_FIELD_2_0_2>
	{
	private:
	public:
		ALTERNATE_FIELD_2_0_2(deamer::external::cpp::ast::NodeInformation information_)
		: DST<ALTERNATE_FIELD_2_0_2>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_ALTERNATE_FIELD_2_0_2_H
