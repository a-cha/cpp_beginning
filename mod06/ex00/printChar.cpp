//
// Created by Антон Чапарин on 08.03.2021.
//

#include <iostream>
#include <cmath>

void	printChar(char const c)
{
	std::cout << "char: ";
	if (isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	printChar(int i)
{
	printChar(static_cast<char const>(i));
}

void	printChar(float f)
{
	if (isinf(f) || isnan(f))
		std::cout << "char: impossible" << std::endl;
	else
		printChar(static_cast<char const>(f));
}

void	printChar(double d)
{
	if (isinf(d) || isnan(d))
		std::cout << "char: impossible" << std::endl;
	else
		printChar(static_cast<char const>(d));
}
