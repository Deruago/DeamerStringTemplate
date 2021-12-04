#ifndef DST_AST_NODE_main_assignment_H
#define DST_AST_NODE_main_assignment_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class main_assignment : public DST<main_assignment>
	{
	private:
	public:
		main_assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<main_assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_main_assignment_H
