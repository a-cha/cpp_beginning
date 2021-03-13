
#include "Array.hpp"
#include "print.hpp"
#include <iostream>
#include <exception>

#define LEN 5

int main()
{
	std::cout << BOLD "Test empty Array int" STD << std::endl;
	Array<int> empty;
	try
	{
		empty[0] = 1;
	}
	catch (std::exception & exc)
	{
		std::cerr << RED << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Test full Array int" STD << std::endl;
	Array<int> full(LEN);
	try
	{
		for (int i = 0; i < LEN; i++)
		{
			full[i] = i + 1;
		}
		for (int i = 0; i < LEN; i++)
		{
			std::cout << full[i] << std::endl;
		}
		full[LEN] = 5;
	}
	catch (std::exception & exc)
	{
		std::cerr << RED << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Test full Array char" STD << std::endl;
	Array<unsigned char> fullChar(LEN);
	try
	{
		for (int i = 0; i < LEN; i++)
		{
			fullChar[i] = static_cast<unsigned char>(i + 65);
		}
		for (int i = 0; i < LEN; i++)
		{
			std::cout << fullChar[i] << std::endl;
		}
	}
	catch (std::exception & exc)
	{
		std::cerr << RED << exc.what() << STD << std::endl;
	}

	return 0;
}
