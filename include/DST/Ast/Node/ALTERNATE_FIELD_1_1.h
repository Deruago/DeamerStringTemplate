#ifndef DST_AST_NODE_ALTERNATE_FIELD_1_1_H
#define DST_AST_NODE_ALTERNATE_FIELD_1_1_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class ALTERNATE_FIELD_1_1 : public DST<ALTERNATE_FIELD_1_1>
	{
	private:
	public:
		ALTERNATE_FIELD_1_1(deamer::external::cpp::ast::NodeInformation information_)
		: DST<ALTERNATE_FIELD_1_1>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_ALTERNATE_FIELD_1_1_H
