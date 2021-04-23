#ifndef DST_Main_AST_NODE_LEFT_BRACKETS_ESCAPED_H
#define DST_Main_AST_NODE_LEFT_BRACKETS_ESCAPED_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class LEFT_BRACKETS_ESCAPED : public DST_Main<LEFT_BRACKETS_ESCAPED>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		LEFT_BRACKETS_ESCAPED(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<LEFT_BRACKETS_ESCAPED>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_LEFT_BRACKETS_ESCAPED_H
