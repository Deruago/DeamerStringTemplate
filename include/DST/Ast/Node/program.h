#ifndef DST_AST_NODE_program_H
#define DST_AST_NODE_program_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class program : public DST<program>
	{
	private:
	public:
		program(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<program>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_program_H
