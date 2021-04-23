#ifndef DST_Setting_AST_NODE_user_keyword_H
#define DST_Setting_AST_NODE_user_keyword_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node { 

	class user_keyword : public DST_Setting<user_keyword>
	{
	private:
	public:
		user_keyword(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST_Setting<user_keyword>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_user_keyword_H
