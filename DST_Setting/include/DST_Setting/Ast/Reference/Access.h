#ifndef DST_SETTING_AST_REFERENCE_ACCESSTEMPLATEBASE_H
#define DST_SETTING_AST_REFERENCE_ACCESSTEMPLATEBASE_H

#include "DST_Setting/Ast/Relation/NodeEnumToType.h"
#include "DST_Setting/Ast/Relation/NodeTypeToEnum.h"
#include "DST_Setting/Ast/Relation/NodeIsInlined.h"

#include "DST_Setting/Ast/Enum/Type.h"
#include "DST_Setting/Ast/Node/program.h"
#include "DST_Setting/Ast/Node/stmts.h"
#include "DST_Setting/Ast/Node/stmt.h"
#include "DST_Setting/Ast/Node/abstraction.h"
#include "DST_Setting/Ast/Node/special.h"
#include "DST_Setting/Ast/Node/variable_declaration.h"
#include "DST_Setting/Ast/Node/main_assignment.h"
#include "DST_Setting/Ast/Node/keyword_assignment.h"
#include "DST_Setting/Ast/Node/scope.h"
#include "DST_Setting/Ast/Node/dst_keyword.h"
#include "DST_Setting/Ast/Node/user_keyword.h"
#include "DST_Setting/Ast/Node/alternative_field_nt_1.h"
#include "DST_Setting/Ast/Node/alternative_field_nt_2.h"
#include "DST_Setting/Ast/Node/LEFT_BRACKETS.h"
#include "DST_Setting/Ast/Node/RIGHT_BRACKETS.h"
#include "DST_Setting/Ast/Node/DOT.h"
#include "DST_Setting/Ast/Node/ADD_ASSIGNMENT.h"
#include "DST_Setting/Ast/Node/EQUAL.h"
#include "DST_Setting/Ast/Node/INVALID.h"
#include "DST_Setting/Ast/Node/LEFT_SQUARE_BRACKET.h"
#include "DST_Setting/Ast/Node/RIGHT_SQUARE_BRACKET.h"
#include "DST_Setting/Ast/Node/USER_INPUT.h"
#include "DST_Setting/Ast/Node/VARNAME.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_1_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_0_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_1_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_2_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_3_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_4_5.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_0.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_1.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_2.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_3.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_4.h"
#include "DST_Setting/Ast/Node/ALTERNATE_FIELD_2_5_5.h"
#include "DST_Setting/Ast/Node/OTHER.h"


#include <vector>
#include <utility>

namespace DST_Setting { namespace ast { namespace reference { 

	struct AccessBase
	{	
	public:
		AccessBase() = default;

	protected:
		template<::DST_Setting::ast::Type T>
		void Get(std::vector<const ::DST_Setting::ast::relation::NodeEnumToType_t<T>*>& foundNodes, const ::deamer::external::cpp::ast::Node* currentNode)
		{
			for(const auto* const node : currentNode->GetNodes())
			{
				if (node->GetType() == static_cast<::std::size_t>(T))
				{
					foundNodes.push_back(static_cast<const  ::DST_Setting::ast::relation::NodeEnumToType_t<T>*>(node));
				}
				else if (::DST_Setting::ast::relation::NodeIsInlined(static_cast<::DST_Setting::ast::Type>(node->GetType())))
				{
					Get<T>(foundNodes, node);
				}
			}
		}

		template<::DST_Setting::ast::Type T, typename Q>
		inline std::vector<const ::DST_Setting::ast::relation::NodeEnumToType_t<T>*> Get(std::vector<const Q*>& currentNodes)
		{
			std::vector<const ::DST_Setting::ast::relation::NodeEnumToType_t<T>*> foundNodes;

			for (const auto* const currentNode : currentNodes)
			{
				AccessBase::Get<T>(foundNodes, currentNode);
			}

			return foundNodes;
		}
	};

	/*!	\class AccessTemplateBase
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 *
	 *	\details This class contains the type dependent implementation of Access<T>.
	 *	Refrain from using this class, as there is no backwards compatibility
	 *	guarantee of this implementation class,
	 *	Use Access<T> instead, this is backwards compatible and offers different benefits.
	 *
	 *	\see Access
	 */
	template<typename T>
	struct AccessTemplateBase : public AccessBase
	{
		AccessTemplateBase() = delete;
		~AccessTemplateBase() = delete;
	};

	/*! \class Access
	 *
	 *	\brief Used to access AST nodes. It contains various helper functions to ease navigation through AST nodes.
	 *
	 *	\details Type dispatcher for logic.
	 *
	 *	\see AccessTemplateBase
	 */
	template<typename T>
	struct Access : public AccessTemplateBase<T>
	{
		Access(std::vector<const T*> ts_) : AccessTemplateBase<T>(ts_)
		{
		}

		Access(const T& t) : AccessTemplateBase<T>(t)
		{
		}

		Access(const T* t) : AccessTemplateBase<T>(t)
		{
		}

		Access(const AccessTemplateBase<T>& rhs) : AccessTemplateBase<T>(rhs)
		{
		}

		Access() = default;
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::program>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::stmts>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::stmt>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::abstraction>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::special>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::main_assignment>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::scope>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::dst_keyword>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::user_keyword>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::DOT>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ADD_ASSIGNMENT>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::EQUAL>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::INVALID>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::VARNAME>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5>;
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::OTHER>;


	
	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::program> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::program*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::program*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::program& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::program* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::program>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::program*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::stmts> stmts();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::program>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::stmts> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::stmts*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::stmts*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::stmts& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::stmts* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::stmts>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::stmts>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::stmts*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::stmts*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::stmts> stmts();
AccessTemplateBase<::DST_Setting::ast::node::stmt> stmt();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::stmts>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::stmt> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::stmt*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::stmt*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::stmt& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::stmt* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::stmt>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::stmt>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::stmt*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::stmt*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::abstraction> abstraction();
AccessTemplateBase<::DST_Setting::ast::node::special> special();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::stmt>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::abstraction> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::abstraction*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::abstraction*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::abstraction& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::abstraction* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::abstraction>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::abstraction>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::abstraction*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::abstraction*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::variable_declaration> variable_declaration();
AccessTemplateBase<::DST_Setting::ast::node::main_assignment> main_assignment();
AccessTemplateBase<::DST_Setting::ast::node::EQUAL> EQUAL();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::abstraction>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::special> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::special*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::special*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::special& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::special* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::special>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::special>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::special*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::special*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::variable_declaration> variable_declaration();
AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment> keyword_assignment();
AccessTemplateBase<::DST_Setting::ast::node::EQUAL> EQUAL();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::special>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::variable_declaration> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::variable_declaration*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::variable_declaration*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::variable_declaration& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::variable_declaration* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::variable_declaration*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::variable_declaration*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS> LEFT_BRACKETS();
AccessTemplateBase<::DST_Setting::ast::node::scope> scope();
AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS> RIGHT_BRACKETS();
AccessTemplateBase<::DST_Setting::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::main_assignment> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::main_assignment*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::main_assignment*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::main_assignment& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::main_assignment* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::main_assignment>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::main_assignment>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::main_assignment*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::main_assignment*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1> alternative_field_nt_1();
AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2> alternative_field_nt_2();
AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT> USER_INPUT();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::main_assignment>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::keyword_assignment*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::keyword_assignment*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::keyword_assignment& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::keyword_assignment* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::keyword_assignment*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::keyword_assignment*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::dst_keyword> dst_keyword();
AccessTemplateBase<::DST_Setting::ast::node::user_keyword> user_keyword();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::scope> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::scope*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::scope*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::scope& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::scope* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::scope>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::scope>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::scope*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::scope*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::scope> scope();
AccessTemplateBase<::DST_Setting::ast::node::DOT> DOT();
AccessTemplateBase<::DST_Setting::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::scope>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::dst_keyword> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::dst_keyword*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::dst_keyword*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::dst_keyword& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::dst_keyword* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::dst_keyword>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::dst_keyword>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::dst_keyword*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::dst_keyword*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::INVALID> INVALID();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::dst_keyword>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::user_keyword> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::user_keyword*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::user_keyword*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::user_keyword& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::user_keyword* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::user_keyword>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::user_keyword>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::user_keyword*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::user_keyword*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET> LEFT_SQUARE_BRACKET();
AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET> RIGHT_SQUARE_BRACKET();
AccessTemplateBase<::DST_Setting::ast::node::VARNAME> VARNAME();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::user_keyword>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::alternative_field_nt_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::alternative_field_nt_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::alternative_field_nt_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::alternative_field_nt_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::alternative_field_nt_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::alternative_field_nt_1*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0> ALTERNATE_FIELD_1_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1> ALTERNATE_FIELD_1_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2> ALTERNATE_FIELD_1_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3> ALTERNATE_FIELD_1_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4> ALTERNATE_FIELD_1_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5> ALTERNATE_FIELD_1_5();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::alternative_field_nt_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::alternative_field_nt_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::alternative_field_nt_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::alternative_field_nt_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::alternative_field_nt_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::alternative_field_nt_2*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0> ALTERNATE_FIELD_2_0_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1> ALTERNATE_FIELD_2_0_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2> ALTERNATE_FIELD_2_0_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3> ALTERNATE_FIELD_2_0_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4> ALTERNATE_FIELD_2_0_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5> ALTERNATE_FIELD_2_0_5();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0> ALTERNATE_FIELD_2_1_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1> ALTERNATE_FIELD_2_1_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2> ALTERNATE_FIELD_2_1_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3> ALTERNATE_FIELD_2_1_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4> ALTERNATE_FIELD_2_1_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5> ALTERNATE_FIELD_2_1_5();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0> ALTERNATE_FIELD_2_2_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1> ALTERNATE_FIELD_2_2_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2> ALTERNATE_FIELD_2_2_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3> ALTERNATE_FIELD_2_2_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4> ALTERNATE_FIELD_2_2_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5> ALTERNATE_FIELD_2_2_5();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0> ALTERNATE_FIELD_2_3_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1> ALTERNATE_FIELD_2_3_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2> ALTERNATE_FIELD_2_3_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3> ALTERNATE_FIELD_2_3_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4> ALTERNATE_FIELD_2_3_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5> ALTERNATE_FIELD_2_3_5();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0> ALTERNATE_FIELD_2_4_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1> ALTERNATE_FIELD_2_4_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2> ALTERNATE_FIELD_2_4_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3> ALTERNATE_FIELD_2_4_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4> ALTERNATE_FIELD_2_4_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5> ALTERNATE_FIELD_2_4_5();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0> ALTERNATE_FIELD_2_5_0();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1> ALTERNATE_FIELD_2_5_1();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2> ALTERNATE_FIELD_2_5_2();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3> ALTERNATE_FIELD_2_5_3();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4> ALTERNATE_FIELD_2_5_4();
AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5> ALTERNATE_FIELD_2_5_5();


		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::LEFT_BRACKETS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::LEFT_BRACKETS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::LEFT_BRACKETS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::LEFT_BRACKETS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::LEFT_BRACKETS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::LEFT_BRACKETS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::RIGHT_BRACKETS*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::RIGHT_BRACKETS*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::RIGHT_BRACKETS& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::RIGHT_BRACKETS* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::RIGHT_BRACKETS*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::RIGHT_BRACKETS*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::DOT> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::DOT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::DOT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::DOT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::DOT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::DOT>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::DOT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::DOT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::DOT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::DOT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ADD_ASSIGNMENT> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ADD_ASSIGNMENT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ADD_ASSIGNMENT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ADD_ASSIGNMENT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ADD_ASSIGNMENT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ADD_ASSIGNMENT>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ADD_ASSIGNMENT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ADD_ASSIGNMENT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ADD_ASSIGNMENT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ADD_ASSIGNMENT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::EQUAL> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::EQUAL*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::EQUAL*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::EQUAL& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::EQUAL* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::EQUAL>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::EQUAL>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::EQUAL*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::EQUAL*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::EQUAL>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::INVALID> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::INVALID*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::INVALID*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::INVALID& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::INVALID* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::INVALID>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::INVALID>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::INVALID*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::INVALID*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::INVALID>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::USER_INPUT*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::USER_INPUT*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::USER_INPUT& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::USER_INPUT* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::USER_INPUT*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::USER_INPUT*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::VARNAME> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::VARNAME*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::VARNAME*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::VARNAME& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::VARNAME* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::VARNAME>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::VARNAME>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::VARNAME*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::VARNAME*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::VARNAME>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};

	template<>
	struct AccessTemplateBase<::DST_Setting::ast::node::OTHER> : public AccessBase
	{
	protected:
		std::vector<const ::DST_Setting::ast::node::OTHER*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST_Setting::ast::node::OTHER*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::OTHER& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST_Setting::ast::node::OTHER* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST_Setting::ast::node::OTHER>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST_Setting::ast::node::OTHER>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST_Setting::ast::node::OTHER*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST_Setting::ast::node::OTHER*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST_Setting::ast::node::OTHER>& for_all(FunctionType function)
		{
			for (const auto* const t : ts)
			{
				function(t);
			}

			return *this;
		}

	public:
		auto begin()
		{
			return ts.begin();
		}
		auto cbegin()
		{
			return ts.cbegin();
		}
		
		auto end()
		{
			return ts.end();
		}
		
		auto cend()
		{
			return ts.cend();
		}
	};


	
		inline AccessTemplateBase<::DST_Setting::ast::node::stmts> AccessTemplateBase<::DST_Setting::ast::node::program>::stmts()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::stmts>(Get<::DST_Setting::ast::Type::stmts>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::stmts> AccessTemplateBase<::DST_Setting::ast::node::stmts>::stmts()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::stmts>(Get<::DST_Setting::ast::Type::stmts>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::stmt> AccessTemplateBase<::DST_Setting::ast::node::stmts>::stmt()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::stmt>(Get<::DST_Setting::ast::Type::stmt>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::abstraction> AccessTemplateBase<::DST_Setting::ast::node::stmt>::abstraction()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::abstraction>(Get<::DST_Setting::ast::Type::abstraction>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::special> AccessTemplateBase<::DST_Setting::ast::node::stmt>::special()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::special>(Get<::DST_Setting::ast::Type::special>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::variable_declaration> AccessTemplateBase<::DST_Setting::ast::node::abstraction>::variable_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>(Get<::DST_Setting::ast::Type::variable_declaration>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::main_assignment> AccessTemplateBase<::DST_Setting::ast::node::abstraction>::main_assignment()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::main_assignment>(Get<::DST_Setting::ast::Type::main_assignment>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::EQUAL> AccessTemplateBase<::DST_Setting::ast::node::abstraction>::EQUAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::EQUAL>(Get<::DST_Setting::ast::Type::EQUAL>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::variable_declaration> AccessTemplateBase<::DST_Setting::ast::node::special>::variable_declaration()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>(Get<::DST_Setting::ast::Type::variable_declaration>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment> AccessTemplateBase<::DST_Setting::ast::node::special>::keyword_assignment()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>(Get<::DST_Setting::ast::Type::keyword_assignment>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::EQUAL> AccessTemplateBase<::DST_Setting::ast::node::special>::EQUAL()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::EQUAL>(Get<::DST_Setting::ast::Type::EQUAL>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS> AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>::LEFT_BRACKETS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::LEFT_BRACKETS>(Get<::DST_Setting::ast::Type::LEFT_BRACKETS>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::scope> AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>::scope()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::scope>(Get<::DST_Setting::ast::Type::scope>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS> AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>::RIGHT_BRACKETS()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::RIGHT_BRACKETS>(Get<::DST_Setting::ast::Type::RIGHT_BRACKETS>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::VARNAME> AccessTemplateBase<::DST_Setting::ast::node::variable_declaration>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::VARNAME>(Get<::DST_Setting::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1> AccessTemplateBase<::DST_Setting::ast::node::main_assignment>::alternative_field_nt_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>(Get<::DST_Setting::ast::Type::alternative_field_nt_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2> AccessTemplateBase<::DST_Setting::ast::node::main_assignment>::alternative_field_nt_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>(Get<::DST_Setting::ast::Type::alternative_field_nt_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT> AccessTemplateBase<::DST_Setting::ast::node::main_assignment>::USER_INPUT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::USER_INPUT>(Get<::DST_Setting::ast::Type::USER_INPUT>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::dst_keyword> AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>::dst_keyword()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::dst_keyword>(Get<::DST_Setting::ast::Type::dst_keyword>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::user_keyword> AccessTemplateBase<::DST_Setting::ast::node::keyword_assignment>::user_keyword()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::user_keyword>(Get<::DST_Setting::ast::Type::user_keyword>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::scope> AccessTemplateBase<::DST_Setting::ast::node::scope>::scope()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::scope>(Get<::DST_Setting::ast::Type::scope>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::DOT> AccessTemplateBase<::DST_Setting::ast::node::scope>::DOT()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::DOT>(Get<::DST_Setting::ast::Type::DOT>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::VARNAME> AccessTemplateBase<::DST_Setting::ast::node::scope>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::VARNAME>(Get<::DST_Setting::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::INVALID> AccessTemplateBase<::DST_Setting::ast::node::dst_keyword>::INVALID()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::INVALID>(Get<::DST_Setting::ast::Type::INVALID>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET> AccessTemplateBase<::DST_Setting::ast::node::user_keyword>::LEFT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::LEFT_SQUARE_BRACKET>(Get<::DST_Setting::ast::Type::LEFT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET> AccessTemplateBase<::DST_Setting::ast::node::user_keyword>::RIGHT_SQUARE_BRACKET()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET>(Get<::DST_Setting::ast::Type::RIGHT_SQUARE_BRACKET>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::VARNAME> AccessTemplateBase<::DST_Setting::ast::node::user_keyword>::VARNAME()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::VARNAME>(Get<::DST_Setting::ast::Type::VARNAME>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>::ALTERNATE_FIELD_1_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>::ALTERNATE_FIELD_1_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>::ALTERNATE_FIELD_1_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>::ALTERNATE_FIELD_1_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>::ALTERNATE_FIELD_1_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_1>::ALTERNATE_FIELD_1_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_1_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_1_5>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_0_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_0_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_0_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_0_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_0_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_0_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_0_5>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_1_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_1_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_1_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_1_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_1_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_1_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_1_5>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_2_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_2_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_2_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_2_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_2_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_2_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_2_5>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_3_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_3_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_3_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_3_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_3_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_3_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_3_5>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_4_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_4_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_4_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_4_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_4_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_4_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_4_5>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_5_0()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_0>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_5_1()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_1>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_5_2()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_2>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_5_3()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_3>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_5_4()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_4>(ts));
		}

		inline AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5> AccessTemplateBase<::DST_Setting::ast::node::alternative_field_nt_2>::ALTERNATE_FIELD_2_5_5()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5>(Get<::DST_Setting::ast::Type::ALTERNATE_FIELD_2_5_5>(ts));
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
			if (node->GetType() == static_cast<::std::size_t>(::DST_Setting::ast::relation::NodeTypeToEnum_v<T>))
			{
				function(Access<T>(static_cast<const T*>(node)));
			}
		}
	};

}}}

#endif // DST_SETTING_AST_REFERENCE_ACCESSTEMPLATEBASE_H