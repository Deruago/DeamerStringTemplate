#ifndef DST_AST_RELATION_NODETYPETOENUM_H
#define DST_AST_RELATION_NODETYPETOENUM_H

#include "DST/Ast/Enum/Type.h"

namespace DST { namespace ast { namespace node {

class program;
class deamerreserved_star__ANY__;
class ANY;

}}}

namespace DST { namespace ast { namespace relation { 

	template<typename T>
	struct NodeTypeToEnum
	{
		constexpr static auto value = ::DST::ast::Type::deamerreserved_unknown;
		using type = void;
	};


	template<>
	struct NodeTypeToEnum<::DST::ast::node::program>
	{
		constexpr static auto value = ::DST::ast::Type::program;
		using type = ::DST::ast::node::program;
	};

	template<>
	struct NodeTypeToEnum<::DST::ast::node::deamerreserved_star__ANY__>
	{
		constexpr static auto value = ::DST::ast::Type::deamerreserved_star__ANY__;
		using type = ::DST::ast::node::deamerreserved_star__ANY__;
	};

	template<>
	struct NodeTypeToEnum<::DST::ast::node::ANY>
	{
		constexpr static auto value = ::DST::ast::Type::ANY;
		using type = ::DST::ast::node::ANY;
	};


template<typename T>
constexpr static auto NodeTypeToEnum_v = ::DST::ast::relation::NodeTypeToEnum<T>::value;

template<typename T>
using NodeTypeToEnum_t = typename ::DST::ast::relation::NodeTypeToEnum<T>::type;

}}}

#endif // DST_AST_RELATION_NODETYPETOENUM_H