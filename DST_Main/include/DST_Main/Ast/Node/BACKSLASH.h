#ifndef DST_Main_AST_NODE_BACKSLASH_H
#define DST_Main_AST_NODE_BACKSLASH_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class BACKSLASH : public DST_Main<BACKSLASH>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		BACKSLASH(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<BACKSLASH>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_BACKSLASH_H
