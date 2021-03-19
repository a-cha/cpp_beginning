//
// Created by Антон Чапарин on 08.03.2021.
//

#include <iostream>
#include <cmath>

void	print(char c)
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	print(long i)
{
	std::cout << "int: " << i << std::endl;
}

void	print(float f)
{
	std::cout << "float: ";
	if (f == round(f))
		std::cout << f << ".0f" << std::endl;
	else
		std::cout << f << "f" << std::endl;
}

void	print(double d)
{
	std::cout << "double: ";
	if (d == round(d))
		std::cout << d << ".0" << std::endl;
	else
		std::cout << d << std::endl;
}

void	print(const std::string & s)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (s == "nanf" || s == "+inff" || s == "-inff")
	{
		std::cout << "float: " << s << std::endl;
		std::cout << "double: " << s.substr(0, s.length() - 1) << std::endl;
	}
	else
	{
		std::cout << "float: " << s << "f" << std::endl;
		std::cout << "double: " << s << std::endl;
	}
}
