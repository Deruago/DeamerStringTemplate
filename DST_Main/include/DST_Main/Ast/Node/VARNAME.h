#ifndef DST_Main_AST_NODE_VARNAME_H
#define DST_Main_AST_NODE_VARNAME_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node {

	class VARNAME : public DST_Main<VARNAME>, public ::DST_Main::ast::common::node::other_symbols
	{
	private:
	public:
		VARNAME(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Main<VARNAME>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_VARNAME_H
