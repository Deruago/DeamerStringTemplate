#ifndef DST_Main_AST_NODE_RIGHT_BRACKETS_H
#define DST_Main_AST_NODE_RIGHT_BRACKETS_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class RIGHT_BRACKETS : public DST_Main<RIGHT_BRACKETS>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		RIGHT_BRACKETS(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<RIGHT_BRACKETS>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_RIGHT_BRACKETS_H
