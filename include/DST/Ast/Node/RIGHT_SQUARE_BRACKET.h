#ifndef DST_AST_NODE_RIGHT_SQUARE_BRACKET_H
#define DST_AST_NODE_RIGHT_SQUARE_BRACKET_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node {

	class RIGHT_SQUARE_BRACKET : public DST<RIGHT_SQUARE_BRACKET>
	{
	private:
	public:
		RIGHT_SQUARE_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: DST<RIGHT_SQUARE_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_RIGHT_SQUARE_BRACKET_H
