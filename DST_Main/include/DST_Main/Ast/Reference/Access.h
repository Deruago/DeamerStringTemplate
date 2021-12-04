#ifndef DST_MAIN_AST_REFERENCE_ACCESS_H
#define DST_MAIN_AST_REFERENCE_ACCESS_H

#include "DST_Main/Ast/Relation/NodeEnumToType.h"
#include "DST_Main/Ast/Relation/NodeTypeToEnum.h"
#include "DST_Main/Ast/Relation/NodeIsInlined.h"

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


#include <vector>
#include <utility>

namespace DST_Main { namespace ast { namespace reference { 

	struct AccessBase
	{	
	public:
		AccessBase() = default;

	protected:
		template<::DST_Main::ast::Type T>
		void Get(std::vector<const ::DST_Main::ast::relation::NodeEnumToType_t<T>*>& foundNodes, const ::deamer::external::cpp::ast::Node* currentNode)
		{
			for(const auto* const node : currentNode->GetNodes())
			{
				if (node->GetType() == static_cast<::std::size_t>(T))
				{
					foundNodes.push_back(static_cast<const  ::DST_Main::ast::relation::NodeEnumToType_t<T>*>(node));
				}
				else if (::DST_Main::ast::relation::NodeIsInlined(static_cast<::DST_Main::ast::Type>(node->GetType())))
				{
					Get<T>(foundNodes, node);
				}
			}
		}

		template<::DST_Main::ast::Type T, typename Q>
		inline std::vector<const ::DST_Main::ast::relation::NodeEnumToType_t<T>*> Get(std::vector<const Q*>& currentNodes)
		{
			std::vector<const ::DST_Main::ast::relation::NodeEnumToType_t<T>*> foundNodes;

			for (const auto* const currentNode : currentNodes)
			{
				AccessBase::Get<T>(foundNodes, currentNode);
			}

			return foundNodes;
		}
	};

	/*!	\class Access
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 */
	template<typename T>
	struct Access : public AccessBase
	{
		Access() = delete;
		~Access() = delete;
	};

	template<>
	struct Access<::DST_Main::ast::node::program>;
	template<>
	struct Access<::DST_Main::ast::node::stmts>;
	template<>
	struct Access<::DST_Main::ast::node::stmt>;
	template<>
	struct Access<::DST_Main::ast::node::variable_insertion>;
	template<>
	struct Access<::DST_Main::ast::node::other_symbols>;
	template<>
	struct Access<::DST_Main::ast::node::variable>;
	template<>
	struct Access<::DST_Main::ast::node::scope>;
	template<>
	struct Access<::DST_Main::ast::node::DOT>;
	template<>
	struct Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED>;
	template<>
	struct Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED>;
	template<>
	struct Access<::DST_Main::ast::node::LEFT_BRACKETS>;
	template<>
	struct Access<::DST_Main::ast::node::RIGHT_BRACKETS>;
	template<>
	struct Access<::DST_Main::ast::node::LEFT_BRACKET>;
	template<>
	struct Access<::DST_Main::ast::node::RIGHT_BRACKET>;
	template<>
	struct Access<::DST_Main::ast::node::VARNAME>;
	template<>
	struct Access<::DST_Main::ast::node::BACKSLASH>;
	template<>
	struct Access<::DST_Main::ast::node::OTHER>;


	
	template<>
	struct Access<::DST_Main::ast::node::program> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::program*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::program*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::program& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::program* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::program>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::program*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::stmts> stmts();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::stmts> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::stmts*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::stmts*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::stmts& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::stmts* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::stmts>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::stmts>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::stmts*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::stmts*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::stmts> stmts();
Access<::DST_Main::ast::node::stmt> stmt();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::stmts>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::stmt> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::stmt*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::stmt*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::stmt& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::stmt* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::stmt>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::stmt*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::variable_insertion> variable_insertion();
Access<::DST_Main::ast::node::other_symbols> other_symbols();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::variable_insertion> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::variable_insertion*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::variable_insertion*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::variable_insertion& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::variable_insertion* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::variable_insertion>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::variable_insertion>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::variable_insertion*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::variable_insertion*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::variable> variable();
Access<::DST_Main::ast::node::LEFT_BRACKETS> LEFT_BRACKETS();
Access<::DST_Main::ast::node::RIGHT_BRACKETS> RIGHT_BRACKETS();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::variable_insertion>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::other_symbols> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::other_symbols*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::other_symbols*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::other_symbols& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::other_symbols* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::other_symbols>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::other_symbols>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::other_symbols*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::other_symbols*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::DOT> DOT();
Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED> LEFT_BRACKETS_ESCAPED();
Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED> RIGHT_BRACKETS_ESCAPED();
Access<::DST_Main::ast::node::LEFT_BRACKETS> LEFT_BRACKETS();
Access<::DST_Main::ast::node::RIGHT_BRACKETS> RIGHT_BRACKETS();
Access<::DST_Main::ast::node::LEFT_BRACKET> LEFT_BRACKET();
Access<::DST_Main::ast::node::RIGHT_BRACKET> RIGHT_BRACKET();
Access<::DST_Main::ast::node::VARNAME> VARNAME();
Access<::DST_Main::ast::node::BACKSLASH> BACKSLASH();
Access<::DST_Main::ast::node::OTHER> OTHER();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::other_symbols>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::variable> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::variable*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::variable*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::variable& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::variable* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::variable>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::variable>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::variable*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::variable*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::scope> scope();
Access<::DST_Main::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::variable>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::scope> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::scope*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::scope*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::scope& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::scope* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::scope>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::scope>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::scope*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::scope*> GetContent()
		{
			return ts;
		}

	public:
		Access<::DST_Main::ast::node::DOT> DOT();
Access<::DST_Main::ast::node::scope> scope();
Access<::DST_Main::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		Access<::DST_Main::ast::node::scope>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::DOT> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::DOT*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::DOT*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::DOT& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::DOT* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::DOT>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::DOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::DOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::DOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::DOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::LEFT_BRACKETS> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::LEFT_BRACKETS& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::LEFT_BRACKETS* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::LEFT_BRACKETS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::LEFT_BRACKETS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::LEFT_BRACKETS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::LEFT_BRACKETS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::RIGHT_BRACKETS> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::RIGHT_BRACKETS& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::RIGHT_BRACKETS* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::RIGHT_BRACKETS>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::RIGHT_BRACKETS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::RIGHT_BRACKETS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::RIGHT_BRACKETS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::LEFT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::LEFT_BRACKET*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::LEFT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::LEFT_BRACKET& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::LEFT_BRACKET* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::LEFT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::LEFT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::LEFT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::LEFT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::LEFT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::RIGHT_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::RIGHT_BRACKET*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::RIGHT_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::RIGHT_BRACKET& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::RIGHT_BRACKET* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::RIGHT_BRACKET>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::RIGHT_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::RIGHT_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::RIGHT_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::RIGHT_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::VARNAME> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::VARNAME*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::VARNAME*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::VARNAME& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::VARNAME* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::VARNAME>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::VARNAME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::VARNAME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::VARNAME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::VARNAME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::BACKSLASH> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::BACKSLASH*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::BACKSLASH*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::BACKSLASH& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::BACKSLASH* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::BACKSLASH>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::BACKSLASH>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::BACKSLASH*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::BACKSLASH*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::BACKSLASH>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};

	template<>
	struct Access<::DST_Main::ast::node::OTHER> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Main::ast::node::OTHER*> ts;

	public:
		Access(std::vector<const ::DST_Main::ast::node::OTHER*> ts_) : ts(std::move(ts_))
		{
		}

		Access(const ::DST_Main::ast::node::OTHER& t) : ts({&t})
		{
		}

		Access(const ::DST_Main::ast::node::OTHER* t) : ts({t})
		{
		}

		Access() = default;

	public:
		Access<::DST_Main::ast::node::OTHER>& operator[](::std::size_t index)
		{
			if (index >= ts.size())
			{
				ts.clear();
			}
			else
			{
				const auto* const copy = ts[index];
				ts.clear();
				ts.push_back(copy);
			}

			return *this;
		}

		Access<::DST_Main::ast::node::OTHER>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
		{
			// swap if the other is larger
			if (indexBegin > indexEnd)
			{
				const auto tmp = indexBegin;
				indexBegin = indexEnd;
				indexEnd = tmp;
			}

			if (indexBegin >= ts.size())
			{
				ts.clear();
			}
			else
			{
				std::vector<const ::DST_Main::ast::node::OTHER*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Main::ast::node::OTHER*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		Access<::DST_Main::ast::node::OTHER>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}
	};


	
		inline Access<::DST_Main::ast::node::stmts> Access<::DST_Main::ast::node::program>::stmts()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::stmts>(Get<::DST_Main::ast::Type::stmts>(ts));
		}

		inline Access<::DST_Main::ast::node::stmts> Access<::DST_Main::ast::node::stmts>::stmts()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::stmts>(Get<::DST_Main::ast::Type::stmts>(ts));
		}

		inline Access<::DST_Main::ast::node::stmt> Access<::DST_Main::ast::node::stmts>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::stmt>(Get<::DST_Main::ast::Type::stmt>(ts));
		}

		inline Access<::DST_Main::ast::node::variable_insertion> Access<::DST_Main::ast::node::stmt>::variable_insertion()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::variable_insertion>(Get<::DST_Main::ast::Type::variable_insertion>(ts));
		}

		inline Access<::DST_Main::ast::node::other_symbols> Access<::DST_Main::ast::node::stmt>::other_symbols()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::other_symbols>(Get<::DST_Main::ast::Type::other_symbols>(ts));
		}

		inline Access<::DST_Main::ast::node::variable> Access<::DST_Main::ast::node::variable_insertion>::variable()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::variable>(Get<::DST_Main::ast::Type::variable>(ts));
		}

		inline Access<::DST_Main::ast::node::LEFT_BRACKETS> Access<::DST_Main::ast::node::variable_insertion>::LEFT_BRACKETS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::LEFT_BRACKETS>(Get<::DST_Main::ast::Type::LEFT_BRACKETS>(ts));
		}

		inline Access<::DST_Main::ast::node::RIGHT_BRACKETS> Access<::DST_Main::ast::node::variable_insertion>::RIGHT_BRACKETS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::RIGHT_BRACKETS>(Get<::DST_Main::ast::Type::RIGHT_BRACKETS>(ts));
		}

		inline Access<::DST_Main::ast::node::DOT> Access<::DST_Main::ast::node::other_symbols>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::DOT>(Get<::DST_Main::ast::Type::DOT>(ts));
		}

		inline Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED> Access<::DST_Main::ast::node::other_symbols>::LEFT_BRACKETS_ESCAPED()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::LEFT_BRACKETS_ESCAPED>(Get<::DST_Main::ast::Type::LEFT_BRACKETS_ESCAPED>(ts));
		}

		inline Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED> Access<::DST_Main::ast::node::other_symbols>::RIGHT_BRACKETS_ESCAPED()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::RIGHT_BRACKETS_ESCAPED>(Get<::DST_Main::ast::Type::RIGHT_BRACKETS_ESCAPED>(ts));
		}

		inline Access<::DST_Main::ast::node::LEFT_BRACKETS> Access<::DST_Main::ast::node::other_symbols>::LEFT_BRACKETS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::LEFT_BRACKETS>(Get<::DST_Main::ast::Type::LEFT_BRACKETS>(ts));
		}

		inline Access<::DST_Main::ast::node::RIGHT_BRACKETS> Access<::DST_Main::ast::node::other_symbols>::RIGHT_BRACKETS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::RIGHT_BRACKETS>(Get<::DST_Main::ast::Type::RIGHT_BRACKETS>(ts));
		}

		inline Access<::DST_Main::ast::node::LEFT_BRACKET> Access<::DST_Main::ast::node::other_symbols>::LEFT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::LEFT_BRACKET>(Get<::DST_Main::ast::Type::LEFT_BRACKET>(ts));
		}

		inline Access<::DST_Main::ast::node::RIGHT_BRACKET> Access<::DST_Main::ast::node::other_symbols>::RIGHT_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::RIGHT_BRACKET>(Get<::DST_Main::ast::Type::RIGHT_BRACKET>(ts));
		}

		inline Access<::DST_Main::ast::node::VARNAME> Access<::DST_Main::ast::node::other_symbols>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::VARNAME>(Get<::DST_Main::ast::Type::VARNAME>(ts));
		}

		inline Access<::DST_Main::ast::node::BACKSLASH> Access<::DST_Main::ast::node::other_symbols>::BACKSLASH()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::BACKSLASH>(Get<::DST_Main::ast::Type::BACKSLASH>(ts));
		}

		inline Access<::DST_Main::ast::node::OTHER> Access<::DST_Main::ast::node::other_symbols>::OTHER()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::OTHER>(Get<::DST_Main::ast::Type::OTHER>(ts));
		}

		inline Access<::DST_Main::ast::node::scope> Access<::DST_Main::ast::node::variable>::scope()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::scope>(Get<::DST_Main::ast::Type::scope>(ts));
		}

		inline Access<::DST_Main::ast::node::VARNAME> Access<::DST_Main::ast::node::variable>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::VARNAME>(Get<::DST_Main::ast::Type::VARNAME>(ts));
		}

		inline Access<::DST_Main::ast::node::DOT> Access<::DST_Main::ast::node::scope>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::DOT>(Get<::DST_Main::ast::Type::DOT>(ts));
		}

		inline Access<::DST_Main::ast::node::scope> Access<::DST_Main::ast::node::scope>::scope()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::scope>(Get<::DST_Main::ast::Type::scope>(ts));
		}

		inline Access<::DST_Main::ast::node::VARNAME> Access<::DST_Main::ast::node::scope>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return Access<::DST_Main::ast::node::VARNAME>(Get<::DST_Main::ast::Type::VARNAME>(ts));
		}


	/*!	\class Access_if
	 *
	 *	\brief Accesses the node if it is of the given type.
	 *
	 *	\note A lambda has to be supplied as second argument with paramater: "Access<T>".
	 */
	template<typename T>
	struct Access_if
	{
		const ::deamer::external::cpp::ast::Node* node;

		template<typename FunctionType>
		Access_if(const ::deamer::external::cpp::ast::Node* node_, FunctionType function) : node(node_)
		{
			if (node->GetType() == static_cast<::std::size_t>(::DST_Main::ast::relation::NodeTypeToEnum_v<T>))
			{
				function(Access<T>(static_cast<const T*>(node)));
			}
		}
	};

}}}

#endif // DST_MAIN_AST_REFERENCE_ACCESS_H