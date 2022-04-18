#ifndef DST_AST_REFERENCE_ACCESSTEMPLATEBASE_H
#define DST_AST_REFERENCE_ACCESSTEMPLATEBASE_H

#include "DST/Ast/Relation/NodeEnumToType.h"
#include "DST/Ast/Relation/NodeTypeToEnum.h"
#include "DST/Ast/Relation/NodeIsInlined.h"

#include "DST/Ast/Enum/Type.h"
#include "DST/Ast/Node/program.h"
#include "DST/Ast/Node/deamerreserved_star__ANY__.h"
#include "DST/Ast/Node/ANY.h"


#include <vector>
#include <utility>

namespace DST { namespace ast { namespace reference { 

	struct AccessBase
	{	
	public:
		AccessBase() = default;

	protected:
		template<::DST::ast::Type T>
		void Get(std::vector<const ::DST::ast::relation::NodeEnumToType_t<T>*>& foundNodes, const ::deamer::external::cpp::ast::Node* currentNode)
		{
			for(const auto* const node : currentNode->GetNodes())
			{
				if (node->GetType() == static_cast<::std::size_t>(T))
				{
					foundNodes.push_back(static_cast<const  ::DST::ast::relation::NodeEnumToType_t<T>*>(node));
				}
				else if (::DST::ast::relation::NodeIsInlined(static_cast<::DST::ast::Type>(node->GetType())))
				{
					Get<T>(foundNodes, node);
				}
			}
		}

		template<::DST::ast::Type T, typename Q>
		inline std::vector<const ::DST::ast::relation::NodeEnumToType_t<T>*> Get(std::vector<const Q*>& currentNodes)
		{
			std::vector<const ::DST::ast::relation::NodeEnumToType_t<T>*> foundNodes;

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
	struct AccessTemplateBase<::DST::ast::node::program>;
	template<>
	struct AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>;
	template<>
	struct AccessTemplateBase<::DST::ast::node::ANY>;


	
	template<>
	struct AccessTemplateBase<::DST::ast::node::program> : public AccessBase
	{
	protected:
		std::vector<const ::DST::ast::node::program*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST::ast::node::program*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST::ast::node::program& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST::ast::node::program* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST::ast::node::program>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST::ast::node::program>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST::ast::node::program*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST::ast::node::program*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__> deamerreserved_star__ANY__();
AccessTemplateBase<::DST::ast::node::ANY> ANY();


		template<typename FunctionType>
		AccessTemplateBase<::DST::ast::node::program>& for_all(FunctionType function)
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
	struct AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__> : public AccessBase
	{
	protected:
		std::vector<const ::DST::ast::node::deamerreserved_star__ANY__*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST::ast::node::deamerreserved_star__ANY__*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST::ast::node::deamerreserved_star__ANY__& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST::ast::node::deamerreserved_star__ANY__* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST::ast::node::deamerreserved_star__ANY__*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST::ast::node::deamerreserved_star__ANY__*> GetContent()
		{
			return ts;
		}

	public:
		AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__> deamerreserved_star__ANY__();
AccessTemplateBase<::DST::ast::node::ANY> ANY();


		template<typename FunctionType>
		AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>& for_all(FunctionType function)
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
	struct AccessTemplateBase<::DST::ast::node::ANY> : public AccessBase
	{
	protected:
		std::vector<const ::DST::ast::node::ANY*> ts;

	public:
		AccessTemplateBase(std::vector<const ::DST::ast::node::ANY*> ts_) : ts(std::move(ts_))
		{
		}

		AccessTemplateBase(const ::DST::ast::node::ANY& t) : ts({&t})
		{
		}

		AccessTemplateBase(const ::DST::ast::node::ANY* t) : ts({t})
		{
		}

		AccessTemplateBase() = default;

	public:
		AccessTemplateBase<::DST::ast::node::ANY>& operator[](::std::size_t index)
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

		AccessTemplateBase<::DST::ast::node::ANY>& operator()(::std::size_t indexBegin, ::std::size_t indexEnd)
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
				std::vector<const ::DST::ast::node::ANY*> temporaries;
				for (auto i = indexBegin; i < ts.size() && i <= indexEnd; i++)
				{
					temporaries.push_back(ts[i]);
				}
				ts.clear();
				ts = temporaries;
			}

			return *this;
		}

		std::vector<const ::DST::ast::node::ANY*> GetContent()
		{
			return ts;
		}

	public:
		

		template<typename FunctionType>
		AccessTemplateBase<::DST::ast::node::ANY>& for_all(FunctionType function)
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


	
		inline AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__> AccessTemplateBase<::DST::ast::node::program>::deamerreserved_star__ANY__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>(Get<::DST::ast::Type::deamerreserved_star__ANY__>(ts));
		}

		inline AccessTemplateBase<::DST::ast::node::ANY> AccessTemplateBase<::DST::ast::node::program>::ANY()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST::ast::node::ANY>(Get<::DST::ast::Type::ANY>(ts));
		}

		inline AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__> AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>::deamerreserved_star__ANY__()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>(Get<::DST::ast::Type::deamerreserved_star__ANY__>(ts));
		}

		inline AccessTemplateBase<::DST::ast::node::ANY> AccessTemplateBase<::DST::ast::node::deamerreserved_star__ANY__>::ANY()
		{
			// Optimized search, if it fails continue using unoptimized search.

			// Unoptimized search
			return AccessTemplateBase<::DST::ast::node::ANY>(Get<::DST::ast::Type::ANY>(ts));
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
			if (node->GetType() == static_cast<::std::size_t>(::DST::ast::relation::NodeTypeToEnum_v<T>))
			{
				function(Access<T>(static_cast<const T*>(node)));
			}
		}
	};

}}}

#endif // DST_AST_REFERENCE_ACCESSTEMPLATEBASE_H