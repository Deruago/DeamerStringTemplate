#ifndef DST_Setting_AST_NODE_variable_declaration_H
#define DST_Setting_AST_NODE_variable_declaration_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class variable_declaration : public DST_Setting<variable_declaration>
	{
	private:
	public:
		variable_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<variable_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_variable_declaration_H
