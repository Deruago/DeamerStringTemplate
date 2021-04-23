#ifndef DST_Main_AST_NODE_other_symbols_H
#define DST_Main_AST_NODE_other_symbols_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Common/Node/other_symbols.h"
#include "DST_Main/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node { 

	class other_symbols : public DST_Main<other_symbols>, public ::DST_Main::ast::common::node::other_symbols, public ::DST_Main::ast::common::node::stmt
	{
	private:
	public:
		other_symbols(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Main<other_symbols>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_other_symbols_H
