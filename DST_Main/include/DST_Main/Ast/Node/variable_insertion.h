#ifndef DST_Main_AST_NODE_variable_insertion_H
#define DST_Main_AST_NODE_variable_insertion_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include "DST_Main/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node { 

	class variable_insertion : public DST_Main<variable_insertion>, public ::DST_Main::ast::common::node::stmt
	{
	private:
	public:
		variable_insertion(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Main<variable_insertion>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_variable_insertion_H
