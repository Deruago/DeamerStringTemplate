#ifndef DST_Setting_AST_NODE_BACKSLASH_H
#define DST_Setting_AST_NODE_BACKSLASH_H

#include "DST_Setting/Ast/Node/DST_Setting.h"
#include "DST_Setting/Ast/Node/other_symbols.h"
#include <Deamer/External/Cpp/Ast/Node.h>

namespace DST_Setting { namespace ast { namespace node {

	class BACKSLASH : public DST_Setting<BACKSLASH>, public ::DST_Setting::ast::common::node::other_symbols
	{
	private:
	public:
		BACKSLASH(deamer::external::cpp::ast::NodeInformation information_)
		: DST_Setting<BACKSLASH>(information_, {}, {})
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_BACKSLASH_H
