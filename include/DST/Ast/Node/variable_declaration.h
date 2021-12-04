#ifndef DST_AST_NODE_variable_declaration_H
#define DST_AST_NODE_variable_declaration_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class variable_declaration : public DST<variable_declaration>
	{
	private:
	public:
		variable_declaration(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<variable_declaration>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_variable_declaration_H
