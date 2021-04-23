#ifndef DST_Setting_AST_NODE_variable_insertion_H
#define DST_Setting_AST_NODE_variable_insertion_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class variable_insertion : public DST_Setting<variable_insertion>, public ::DST_Setting::ast::common::node::stmt
	{
	private:
	public:
		variable_insertion(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<variable_insertion>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_variable_insertion_H
