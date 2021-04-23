#ifndef DST_Main_AST_NODE_stmts_H
#define DST_Main_AST_NODE_stmts_H

#include "DST_Main/Ast/Node/DST_Main.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Main { namespace ast { namespace node { 

	class stmts : public DST_Main<stmts>
	{
	private:
	public:
		stmts(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Main<stmts>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Main_AST_NODE_stmts_H
