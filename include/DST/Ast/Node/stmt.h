#ifndef DST_AST_NODE_stmt_H
#define DST_AST_NODE_stmt_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Common/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class stmt : public DST<stmt>, public ::DST::ast::common::node::stmt
	{
	private:
	public:
		stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_stmt_H
