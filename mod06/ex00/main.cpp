//
// Created by Антон Чапарин on 08.03.2021.
//

#include "printTypes.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error args num (expected 1)" << std::endl;
		return -1;
	}

	const std::string	value(av[1]);
//	CHAR
	if (value.length() == 1 && !isdigit(value[0]))
	{
		char c = av[1][0];

		print(c);
		print(static_cast<long>(c));
		print(static_cast<float>(c));
		print(static_cast<double>(c));
	}
//	SCIENTIFIC
	else if (value == "nanf"	||
			 value == "+inff"	||
			 value == "-inff"	||
			 value == "nan"		||
			 value == "+inf"	||
			 value == "-inf")
	{
		print(value);
	}
//	INT
	else if (value.find('.') == std::string::npos)
	{
		long i = strtol(av[1], nullptr, 10);

		if (errno != ERANGE)
		{
			if (i >= CHAR_MIN && i <= CHAR_MAX)
				print(static_cast<char>(i));
			else
				std::cout << "char: impossible" << std::endl;
			if (i >= INT_MIN && i <= INT_MAX)
				print(i);
			else
				std::cout << "int: impossible" << std::endl;
			print(static_cast<float>(i));
			print(static_cast<double>(i));
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
//	FLOAT
	else if (value[value.length() - 1] == 'f')
	{
		float f = strtof(av[1], nullptr);

		if (errno != ERANGE)
		{
			if (f >= CHAR_MIN && f <= CHAR_MAX)
				print(static_cast<char>(f));
			else
				std::cout << "char: impossible" << std::endl;
			if (static_cast<long>(f) >= INT_MIN && static_cast<long>(f) <= INT_MAX)
				print(static_cast<long>(f));
			else
				std::cout << "int: impossible" << std::endl;
			print(f);
			print(static_cast<double>(f));
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
//	DOUBLE
	else if (value.find('.'))
	{
		double d = strtof(av[1], nullptr);

		if (errno != ERANGE)
		{
			if (d >= CHAR_MIN && d <= CHAR_MAX)
				print(static_cast<char>(d));
			else
				std::cout << "char: impossible" << std::endl;
			if (d >= INT_MIN && d <= INT_MAX)
				print(static_cast<long>(d));
			else
				std::cout << "int: impossible" << std::endl;
			print(static_cast<float>(d));
			print(d);
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
	else
		std::cerr << "Incorrect input" << std::endl;
	return 0;
}
