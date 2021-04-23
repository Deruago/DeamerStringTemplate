#ifndef DST_Setting_AST_NODE_INVALID_H
#define DST_Setting_AST_NODE_INVALID_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Node/dst_keyword.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class INVALID : public DST_Setting<INVALID>, public ::DST_Setting::ast::common::node::dst_keyword
	{
	private:
	public:
		INVALID(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<INVALID>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_INVALID_H
