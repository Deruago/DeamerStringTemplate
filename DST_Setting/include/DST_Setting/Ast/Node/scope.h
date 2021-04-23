#ifndef DST_Setting_AST_NODE_scope_H
#define DST_Setting_AST_NODE_scope_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class scope : public DST_Setting<scope>
	{
	private:
	public:
		scope(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<scope>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_scope_H
