#include "DST/Type/Generation/CPP/Generator.h"
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

enum class Type
{
	RT,
	CT,
};

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cout << "Not enough arguments\n";
		return -1;
	}
	
	DST::type::generation::cpp::Generator generator;

	std::string templateFile;
	std::string settingFile;
	
	for (int i = 1; i < argc; i++)
	{
		if (i == 1)
		{
			templateFile = argv[i];
		}
		else if (i == 2)
		{
			settingFile = argv[i];
		}
	}

	// RT has the benefit to be immediately capable of creating the full file.
	// But RT is incapable of generating a file to generate it.
	// CT is possible but you need to rerun the CT variant to get the complete CT variant.
	const auto type = Type::CT;
	std::string fileContent;
	
	if (type == Type::RT)
	{
		fileContent = generator.GetCPPClassRepresentationOfConstructionRT(templateFile, settingFile);	
	}
	else
	{
		fileContent = generator.GetCPPClassRepresentationOfConstructionCT(templateFile, settingFile);
	}

	std::ofstream file;
	file.open("./" + generator.GetFileName());
	file << fileContent << "\n";
	file.close();

	return 0;
}
