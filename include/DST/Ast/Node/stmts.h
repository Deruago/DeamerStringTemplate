#ifndef DST_AST_NODE_stmts_H
#define DST_AST_NODE_stmts_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class stmts : public DST<stmts>
	{
	private:
	public:
		stmts(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<stmts>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_stmts_H
