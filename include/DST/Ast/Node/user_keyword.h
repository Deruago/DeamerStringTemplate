#ifndef DST_AST_NODE_user_keyword_H
#define DST_AST_NODE_user_keyword_H

#include "DST/Ast/Node/DST.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST { namespace ast { namespace node { 

	class user_keyword : public DST<user_keyword>
	{
	private:
	public:
		user_keyword(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_)
		: DST<user_keyword>(information_, nodes_, {})
		{
		}
	};

}}}

#endif // DST_AST_NODE_user_keyword_H
