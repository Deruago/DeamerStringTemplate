#ifndef DST_Setting_AST_NODE_RIGHT_BRACKETS_ESCAPED_H
#define DST_Setting_AST_NODE_RIGHT_BRACKETS_ESCAPED_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class RIGHT_BRACKETS_ESCAPED : public DST_Setting<RIGHT_BRACKETS_ESCAPED>, public ::DST_Setting::ast::common::node::other_symbols
	{
	private:
	public:
		RIGHT_BRACKETS_ESCAPED(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<RIGHT_BRACKETS_ESCAPED>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_RIGHT_BRACKETS_ESCAPED_H
