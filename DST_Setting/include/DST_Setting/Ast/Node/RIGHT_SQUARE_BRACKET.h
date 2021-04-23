#ifndef DST_Setting_AST_NODE_RIGHT_SQUARE_BRACKET_H
#define DST_Setting_AST_NODE_RIGHT_SQUARE_BRACKET_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class RIGHT_SQUARE_BRACKET : public DST_Setting<RIGHT_SQUARE_BRACKET>
	{
	private:
	public:
		RIGHT_SQUARE_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<RIGHT_SQUARE_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_RIGHT_SQUARE_BRACKET_H
