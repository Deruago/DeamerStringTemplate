#ifndef DST_Main_AST_NODE_DOT_H
#define DST_Main_AST_NODE_DOT_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class DOT : public DST_Main<DOT>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		DOT(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<DOT>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_DOT_H
