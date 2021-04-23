#ifndef DST_Setting_AST_NODE_dst_keyword_H
#define DST_Setting_AST_NODE_dst_keyword_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Common/Node/dst_keyword.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class dst_keyword : public DST_Setting<dst_keyword>, public ::DST_Setting::ast::common::node::dst_keyword
	{
	private:
	public:
		dst_keyword(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<dst_keyword>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_dst_keyword_H
