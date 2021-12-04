#ifndef DST_SETTING_AST_VISUALISATION_GRAPH_H
#define DST_SETTING_AST_VISUALISATION_GRAPH_H

#include "DST_Setting/Ast/Listener/EnterExitListener.h"

namespace DST_Setting { namespace ast { namespace listener { namespace deamer { namespace visualisation {

	class Graph : public EnterExitListener
	{
	private:
		std::string output;

		void Init()
		{
			output += "digraph DST_Setting_AST {\n";
		}

		void End()
		{
			output += "}\n";
		}

		void AddConnection(const  ::deamer::external::cpp::ast::Node* source, const  ::deamer::external::cpp::ast::Node* target)
		{
			output += "\t" + std::to_string(::std::size_t(source)) + " -> " + std::to_string(::std::size_t(target)) + ";\n";
		}

		
		void ListenEntry(const ::DST_Setting::ast::node::program* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"program\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::stmts* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"stmts\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::stmt* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"stmt\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::abstraction* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"abstraction\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::special* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"special\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::variable_declaration* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"variable_declaration\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::main_assignment* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"main_assignment\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::keyword_assignment* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"keyword_assignment\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::scope* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"scope\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::dst_keyword* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"dst_keyword\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::user_keyword* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"user_keyword\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::alternative_field_nt_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"alternative_field_nt_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::alternative_field_nt_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"alternative_field_nt_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::LEFT_BRACKETS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_BRACKETS\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::RIGHT_BRACKETS* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_BRACKETS\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::DOT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"DOT\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ADD_ASSIGNMENT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ADD_ASSIGNMENT\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::EQUAL* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"EQUAL\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::INVALID* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"INVALID\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::LEFT_SQUARE_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"LEFT_SQUARE_BRACKET\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::RIGHT_SQUARE_BRACKET* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"RIGHT_SQUARE_BRACKET\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::USER_INPUT* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"USER_INPUT\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::VARNAME* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"VARNAME\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_1_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_1_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_1_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_1_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_1_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_1_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_1_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_0_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_0_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_0_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_0_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_0_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_0_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_0_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_1_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_1_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_1_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_1_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_1_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_1_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_1_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_2_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_2_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_2_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_2_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_2_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_2_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_2_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_3_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_3_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_3_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_3_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_3_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_3_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_3_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_4_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_4_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_4_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_4_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_4_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_4_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_4_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_0* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_5_0\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_1* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_5_1\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_2* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_5_2\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_3* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_5_3\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_4* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_5_4\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::ALTERNATE_FIELD_2_5_5* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"ALTERNATE_FIELD_2_5_5\"];\n";
		}

		void ListenEntry(const ::DST_Setting::ast::node::OTHER* node) override
		{
			for (const auto* child : node->GetNodes())
			{
				AddConnection(node, child);
			}

			output += "\t" + std::to_string(::std::size_t(node)) + " [label=\"OTHER\"];\n";
		}

		
		void ListenExit(const ::DST_Setting::ast::node::program* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::stmts* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::stmt* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::abstraction* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::special* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::variable_declaration* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::main_assignment* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::keyword_assignment* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::scope* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::dst_keyword* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::user_keyword* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::alternative_field_nt_1* node) override
		{
		}

		void ListenExit(const ::DST_Setting::ast::node::alternative_field_nt_2* node) override
		{
		}


	public:
		Graph()
		{
			Init();
		}


		std::string GetGraph()
		{
			End();
			return output;
		}
	};

}}}}}

#endif // DST_SETTING_AST_VISUALISATION_GRAPH_H