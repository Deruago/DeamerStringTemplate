#ifndef DST_Setting_AST_NODE_main_assignment_H
#define DST_Setting_AST_NODE_main_assignment_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class main_assignment : public DST_Setting<main_assignment>
	{
	private:
	public:
		main_assignment(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<main_assignment>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_main_assignment_H
