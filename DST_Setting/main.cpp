#include <fstream>
#include <iostream>
#include <sstream>

#include "DST_Setting/Ast/Listener/User/InsertVariable.h"
#include "DST_Setting/Bison/Parser.h"

int main()
{
	const std::ifstream inputFile("./test.txt");
	
	auto parser = DST_Setting::parser::Parser();
	std::ostringstream sstr;
	sstr << inputFile.rdbuf();

	std::string input = sstr.str();
	auto* tree = parser.Parse(input);

	//const auto printer = DST_Main::ast::listener::user::Printer();
	//printer.Dispatch(tree->GetStartNode());

	const std::string class_name = "DST";
	const std::string header_guard = class_name + "_H";

	/*const auto replace = DST_Setting::ast::listener::user::InsertVariable(
		{
		{"header_guard", header_guard},
		{"class_name", class_name}
	});
	replace.Dispatch(tree->GetStartNode());

	std::cout << replace.GetOutput();*/
	
	delete tree;
	return 0;
}
