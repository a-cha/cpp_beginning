
#include "printChar.cpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error args num (expected 1)" << std::endl;
		return -1;
	}

	const std::string value(av[1]);
//	char
	if (value.length() == 1 && isdigit(value[0]) != 0)
	{
		char c = av[1][0];

		printChar(c);
	}
//	float
	else if (value == "nanf" ||
		value == "+inff" ||
		value == "-inff" ||
		value.find('.') != std::string::npos && value[value.length() - 1] == 'f')
	{

	}
//	double
	else if (value == "nan" ||
		value == "+inf" ||
		value == "-inf" ||
		value.find('.') != std::string::npos)
	{

	}
//	int
	else
	{

	}

	return 0;
}
