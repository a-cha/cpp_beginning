//
// Created by Антон Чапарин on 11.02.2021.
//

#include <iostream>

int main(int ac, char **av)
{

	if (ac != 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str(av[i]);
			std::cout << std::uppercase << str;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
