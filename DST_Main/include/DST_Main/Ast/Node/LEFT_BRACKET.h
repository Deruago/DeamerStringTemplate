#ifndef DST_Main_AST_NODE_LEFT_BRACKET_H
#define DST_Main_AST_NODE_LEFT_BRACKET_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class LEFT_BRACKET : public DST_Main<LEFT_BRACKET>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		LEFT_BRACKET(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<LEFT_BRACKET>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_LEFT_BRACKET_H
