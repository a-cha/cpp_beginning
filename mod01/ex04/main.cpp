//
// Created by Антон Чапарин on 14.02.2021.
//

#include <iostream>
#include <string>

int main()
{
	std::string str = std::string("HI THIS IS BRAIN");
	std::string *pointer = &str;
	std::string &reference = str;

	std::cout << str << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;

	str = "kek";
	std::cout << str << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	*pointer = "lol";
	std::cout << str << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	reference = "azaz";
	std::cout << str << std::endl;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return 0;
}
