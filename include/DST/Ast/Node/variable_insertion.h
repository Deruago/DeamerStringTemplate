#ifndef DST_AST_NODE_variable_insertion_H
#define DST_AST_NODE_variable_insertion_H

#include "DST/Ast/Node/DST.h"
#include "DST/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class variable_insertion : public DST<variable_insertion>, public ::DST::ast::common::node::stmt
	{
	private:
	public:
		variable_insertion(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<variable_insertion>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_variable_insertion_H
