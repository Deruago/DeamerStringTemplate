#ifndef DST_MAIN_AST_RELATION_NODETYPETOENUM_H
#define DST_MAIN_AST_RELATION_NODETYPETOENUM_H

#include "DST_Main/Ast/Enum/Type.h"

namespace DST_Main { namespace ast { namespace node {

class program;
class stmts;
class stmt;
class variable_insertion;
class other_symbols;
class variable;
class scope;
class DOT;
class LEFT_BRACKETS_ESCAPED;
class RIGHT_BRACKETS_ESCAPED;
class LEFT_BRACKETS;
class RIGHT_BRACKETS;
class LEFT_BRACKET;
class RIGHT_BRACKET;
class VARNAME;
class BACKSLASH;
class OTHER;

}}}

namespace DST_Main { namespace ast { namespace relation { 

	template<typename T>
	struct NodeTypeToEnum
	{
		constexpr static auto value = ::DST_Main::ast::Type::deamerreserved_unknown;
		using type = void;
	};


	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::program>
	{
		constexpr static auto value = ::DST_Main::ast::Type::program;
		using type = ::DST_Main::ast::node::program;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::stmts>
	{
		constexpr static auto value = ::DST_Main::ast::Type::stmts;
		using type = ::DST_Main::ast::node::stmts;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::stmt>
	{
		constexpr static auto value = ::DST_Main::ast::Type::stmt;
		using type = ::DST_Main::ast::node::stmt;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::variable_insertion>
	{
		constexpr static auto value = ::DST_Main::ast::Type::variable_insertion;
		using type = ::DST_Main::ast::node::variable_insertion;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::other_symbols>
	{
		constexpr static auto value = ::DST_Main::ast::Type::other_symbols;
		using type = ::DST_Main::ast::node::other_symbols;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::variable>
	{
		constexpr static auto value = ::DST_Main::ast::Type::variable;
		using type = ::DST_Main::ast::node::variable;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::scope>
	{
		constexpr static auto value = ::DST_Main::ast::Type::scope;
		using type = ::DST_Main::ast::node::scope;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::DOT>
	{
		constexpr static auto value = ::DST_Main::ast::Type::DOT;
		using type = ::DST_Main::ast::node::DOT;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED>
	{
		constexpr static auto value = ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED;
		using type = ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED>
	{
		constexpr static auto value = ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED;
		using type = ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::LEFT_BRACKETS>
	{
		constexpr static auto value = ::DST_Main::ast::Type::LEFT_BRACKETS;
		using type = ::DST_Main::ast::node::LEFT_BRACKETS;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::RIGHT_BRACKETS>
	{
		constexpr static auto value = ::DST_Main::ast::Type::RIGHT_BRACKETS;
		using type = ::DST_Main::ast::node::RIGHT_BRACKETS;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::LEFT_BRACKET>
	{
		constexpr static auto value = ::DST_Main::ast::Type::LEFT_BRACKET;
		using type = ::DST_Main::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::RIGHT_BRACKET>
	{
		constexpr static auto value = ::DST_Main::ast::Type::RIGHT_BRACKET;
		using type = ::DST_Main::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::VARNAME>
	{
		constexpr static auto value = ::DST_Main::ast::Type::VARNAME;
		using type = ::DST_Main::ast::node::VARNAME;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::BACKSLASH>
	{
		constexpr static auto value = ::DST_Main::ast::Type::BACKSLASH;
		using type = ::DST_Main::ast::node::BACKSLASH;
	};

	template<>
	struct NodeTypeToEnum<::DST_Main::ast::node::OTHER>
	{
		constexpr static auto value = ::DST_Main::ast::Type::OTHER;
		using type = ::DST_Main::ast::node::OTHER;
	};


template<typename T>
constexpr static auto NodeTypeToEnum_v = ::DST_Main::ast::relation::NodeTypeToEnum<T>::value;

template<typename T>
using NodeTypeToEnum_t = typename ::DST_Main::ast::relation::NodeTypeToEnum<T>::type;

}}}

#endif // DST_MAIN_AST_RELATION_NODETYPETOENUM_H