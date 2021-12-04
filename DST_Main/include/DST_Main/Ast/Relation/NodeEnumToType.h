#ifndef DST_MAIN_AST_RELATION_NODEENUMTOTYPE_H
#define DST_MAIN_AST_RELATION_NODEENUMTOTYPE_H

#include "DST_Main/Ast/Enum/Type.h"

#include "DST_Main/Ast/Node/program.h"
#include "DST_Main/Ast/Node/stmts.h"
#include "DST_Main/Ast/Node/stmt.h"
#include "DST_Main/Ast/Node/variable_insertion.h"
#include "DST_Main/Ast/Node/other_symbols.h"
#include "DST_Main/Ast/Node/variable.h"
#include "DST_Main/Ast/Node/scope.h"
#include "DST_Main/Ast/Node/DOT.h"
#include "DST_Main/Ast/Node/LEFT_BRACKETS_ESCAPED.h"
#include "DST_Main/Ast/Node/RIGHT_BRACKETS_ESCAPED.h"
#include "DST_Main/Ast/Node/LEFT_BRACKETS.h"
#include "DST_Main/Ast/Node/RIGHT_BRACKETS.h"
#include "DST_Main/Ast/Node/LEFT_BRACKET.h"
#include "DST_Main/Ast/Node/RIGHT_BRACKET.h"
#include "DST_Main/Ast/Node/VARNAME.h"
#include "DST_Main/Ast/Node/BACKSLASH.h"
#include "DST_Main/Ast/Node/OTHER.h"


namespace DST_Main { namespace ast { namespace relation { 

	template<::DST_Main::ast::Type T>
	struct NodeEnumToType
	{
		constexpr static auto value = T;
		using type = void;
	};


	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::program>
	{
		constexpr static auto value = ::DST_Main::ast::Type::program;
		using type = ::DST_Main::ast::node::program;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::stmts>
	{
		constexpr static auto value = ::DST_Main::ast::Type::stmts;
		using type = ::DST_Main::ast::node::stmts;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::stmt>
	{
		constexpr static auto value = ::DST_Main::ast::Type::stmt;
		using type = ::DST_Main::ast::node::stmt;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::variable_insertion>
	{
		constexpr static auto value = ::DST_Main::ast::Type::variable_insertion;
		using type = ::DST_Main::ast::node::variable_insertion;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::other_symbols>
	{
		constexpr static auto value = ::DST_Main::ast::Type::other_symbols;
		using type = ::DST_Main::ast::node::other_symbols;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::variable>
	{
		constexpr static auto value = ::DST_Main::ast::Type::variable;
		using type = ::DST_Main::ast::node::variable;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::scope>
	{
		constexpr static auto value = ::DST_Main::ast::Type::scope;
		using type = ::DST_Main::ast::node::scope;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::DOT>
	{
		constexpr static auto value = ::DST_Main::ast::Type::DOT;
		using type = ::DST_Main::ast::node::DOT;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED>
	{
		constexpr static auto value = ::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED;
		using type = ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED>
	{
		constexpr static auto value = ::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED;
		using type = ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::LEFT_BRACKETS>
	{
		constexpr static auto value = ::DST_Main::ast::Type::LEFT_BRACKETS;
		using type = ::DST_Main::ast::node::LEFT_BRACKETS;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::RIGHT_BRACKETS>
	{
		constexpr static auto value = ::DST_Main::ast::Type::RIGHT_BRACKETS;
		using type = ::DST_Main::ast::node::RIGHT_BRACKETS;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::LEFT_BRACKET>
	{
		constexpr static auto value = ::DST_Main::ast::Type::LEFT_BRACKET;
		using type = ::DST_Main::ast::node::LEFT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::RIGHT_BRACKET>
	{
		constexpr static auto value = ::DST_Main::ast::Type::RIGHT_BRACKET;
		using type = ::DST_Main::ast::node::RIGHT_BRACKET;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::VARNAME>
	{
		constexpr static auto value = ::DST_Main::ast::Type::VARNAME;
		using type = ::DST_Main::ast::node::VARNAME;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::BACKSLASH>
	{
		constexpr static auto value = ::DST_Main::ast::Type::BACKSLASH;
		using type = ::DST_Main::ast::node::BACKSLASH;
	};

	template<>
	struct NodeEnumToType<::DST_Main::ast::Type::OTHER>
	{
		constexpr static auto value = ::DST_Main::ast::Type::OTHER;
		using type = ::DST_Main::ast::node::OTHER;
	};


template<::DST_Main::ast::Type T>
constexpr static auto NodeEnumToType_v = ::DST_Main::ast::relation::NodeEnumToType<T>::value;

template<::DST_Main::ast::Type T>
using NodeEnumToType_t = typename ::DST_Main::ast::relation::NodeEnumToType<T>::type;

}}}

#endif // DST_MAIN_AST_RELATION_NODEENUMTOTYPE_H