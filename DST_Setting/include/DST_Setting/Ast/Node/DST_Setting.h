#ifndef DST_Setting_AST_NODE_DST_Setting_H
#define DST_Setting_AST_NODE_DST_Setting_H

#include <Deamer/External/Cpp/Ast/TemplateNodeBase.h>

namespace DST_Setting { namespace ast { namespace node {

	template<typename Derived>
	class DST_Setting : public ::deamer::external::cpp::ast::TemplateNodeBase<DST_Setting<Derived>, Derived>
	{
	private:
		
	public:
		DST_Setting() = default;
		
		DST_Setting(deamer::external::cpp::ast::NodeInformation information_, std::vector<deamer::external::cpp::ast::Node*> nodes_ = {}, std::vector<size_t> baseValues_ = {})
		: deamer::external::cpp::ast::TemplateNodeBase<DST_Setting<Derived>, Derived>(information_, nodes_, baseValues_)
		{
		}
	};

}}}

#endif // DST_Setting_AST_NODE_DST_Setting_H
