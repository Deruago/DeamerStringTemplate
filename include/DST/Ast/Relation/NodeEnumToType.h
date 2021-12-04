#ifndef DST_AST_RELATION_NODEENUMTOTYPE_H
#define DST_AST_RELATION_NODEENUMTOTYPE_H

#include "DST/Ast/Enum/Type.h"

#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/deamerreserved_star__ANY__.h"
#include "DST/Ast/Node/ANY.h"


namespace DST { namespace ast { namespace relation { 

	template<::DST::ast::Type T>
	struct NodeEnumToType
	{
		constexpr static auto value = T;
		using type = void;
	};


	template<>
	struct NodeEnumToType<::DST::ast::Type::program>
	{
		constexpr static auto value = ::DST::ast::Type::program;
		using type = ::DST::ast::node::program;
	};

	template<>
	struct NodeEnumToType<::DST::ast::Type::deamerreserved_star__ANY__>
	{
		constexpr static auto value = ::DST::ast::Type::deamerreserved_star__ANY__;
		using type = ::DST::ast::node::deamerreserved_star__ANY__;
	};

	template<>
	struct NodeEnumToType<::DST::ast::Type::ANY>
	{
		constexpr static auto value = ::DST::ast::Type::ANY;
		using type = ::DST::ast::node::ANY;
	};


template<::DST::ast::Type T>
constexpr static auto NodeEnumToType_v = ::DST::ast::relation::NodeEnumToType<T>::value;

template<::DST::ast::Type T>
using NodeEnumToType_t = typename ::DST::ast::relation::NodeEnumToType<T>::type;

}}}

#endif // DST_AST_RELATION_NODEENUMTOTYPE_H