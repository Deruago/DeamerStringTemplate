#ifndef DST_Setting_AST_COMMON_NODE_dst_keyword_H
#define DST_Setting_AST_COMMON_NODE_dst_keyword_H

#include <Deamer/External/Cpp/Ast/CommonNodeAPI.h>

namespace DST_Setting { namespace ast { namespace common { namespace node {

	class dst_keyword : public ::deamer::external::cpp::ast::CommonNodeAPI<dst_keyword>
	{	private:
	public:
		dst_keyword() = default;
		virtual ~dst_keyword() = default;
	public:
	};
}}}}

#endif // DST_Setting_AST_COMMON_NODE_dst_keyword_H
