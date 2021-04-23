#ifndef DST_Setting_AST_NODE_program_H
#define DST_Setting_AST_NODE_program_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class program : public DST_Setting<program>
	{
	private:
	public:
		program(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<program>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_program_H
