#ifndef DST_Setting_AST_NODE_abstraction_H
#define DST_Setting_AST_NODE_abstraction_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Node/stmt.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class abstraction : public DST_Setting<abstraction>, public ::DST_Setting::ast::common::node::stmt
	{
	private:
	public:
		abstraction(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<abstraction>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_abstraction_H
