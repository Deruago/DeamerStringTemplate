#ifndef DST_Main_AST_NODE_OTHER_H
#define DST_Main_AST_NODE_OTHER_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class OTHER : public DST_Main<OTHER>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		OTHER(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<OTHER>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_OTHER_H
