//
// Created by Антон Чапарин on 15.02.2021.
//

#include "StringSed.hpp"
#include <iostream>
#include <fstream>

#define GREEN "\033[32m"
#define STD "\033[0m"

/*
 * This define created for CLion's CMake
 * Change the lines below while using program in terminal by Makefile
*/
//#define CURRENT_DIR "/Users/antoncaparin/21/c++_module/mod01/ex07/"
#define CURRENT_DIR ""

void sed(const std::string &origName, const std::string &search, const std::string &repl)
{
	std::string currentLine;
	StringSed sed(search, repl);

	std::ifstream origFile(std::string() + CURRENT_DIR + origName);
	if (!origFile)
		throw "Unable open input file\n"
		"Maybe, reading a main.cpp file will help you";
	std::ofstream replFile(std::string() + CURRENT_DIR + origName + ".replace");
	if (!replFile)
		throw "Unable create file";
	if (search.length() == 0 || repl.length() == 0)
		throw "The passed string is empty";
	while (std::getline(origFile, currentLine))
	{
		sed.replace(currentLine);
		replFile << currentLine << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Error num of arguments\n";
		return -1;
	}
	else
	{
		try { sed(av[1], av[2], av[3]); }
		catch (const char *error)
		{
			std::cerr << error << std::endl;
			return -1;
		}
		std::cout << "Output file " GREEN << av[1] << ".replace" STD " created\n";
	}
	return 0;
}
