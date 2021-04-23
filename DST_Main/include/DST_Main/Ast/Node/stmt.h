#ifndef DST_Main_AST_NODE_stmt_H
#define DST_Main_AST_NODE_stmt_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Common/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node { 

	class stmt : public DST_Main<stmt>, public ::DST_Main::ast::common::node::stmt
	{
	private:
	public:
		stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Main<stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_stmt_H
