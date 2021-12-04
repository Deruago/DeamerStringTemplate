#ifndef DST_AST_NODE_special_H
#define DST_AST_NODE_special_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class special : public DST<special>, public ::DST::ast::common::node::stmt
	{
	private:
	public:
		special(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<special>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_special_H
