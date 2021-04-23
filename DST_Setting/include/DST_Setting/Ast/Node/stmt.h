#ifndef DST_Setting_AST_NODE_stmt_H
#define DST_Setting_AST_NODE_stmt_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Common/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class stmt : public DST_Setting<stmt>, public ::DST_Setting::ast::common::node::stmt
	{
	private:
	public:
		stmt(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<stmt>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_stmt_H
