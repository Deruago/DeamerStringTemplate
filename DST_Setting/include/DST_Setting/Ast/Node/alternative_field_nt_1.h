#ifndef DST_Setting_AST_NODE_alternative_field_nt_1_H
#define DST_Setting_AST_NODE_alternative_field_nt_1_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class alternative_field_nt_1 : public DST_Setting<alternative_field_nt_1>
	{
	private:
	public:
		alternative_field_nt_1(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<alternative_field_nt_1>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_alternative_field_nt_1_H
