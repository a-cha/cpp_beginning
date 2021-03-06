
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "print.hpp"
#include <iostream>

int main()
{
	std::cout << BOLD "First block" STD << std::endl;
	try
	{
		Bureaucrat jim("Jim", 120);
		std::cout << jim << std::endl;
		Bureaucrat john("John", 170);
		std::cout << john << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << "First block error: " << exc.what() << std::endl;
	}

	std::cout << BOLD "Second block" STD << std::endl;
	try
	{
		Form taxes("taxes", 100, 50);
		std::cout << taxes << std::endl;
		Form laws("laws", 0, 5);
		std::cout << laws << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << "Second block error: " << exc.what() << std::endl;
	}

	std::cout << BOLD "Third block" STD << std::endl;
	try
	{
		Bureaucrat holly("Holly", 2);
		std::cout << holly << std::endl;
		Form constitution("constitution", 1, 1);
		std::cout << constitution << std::endl;
		holly.signForm(constitution);
		holly.gradeIncrem();
		std::cout << holly << std::endl;
		holly.gradeIncrem();
	}
	catch (std::exception & exc)
	{
		std::cerr << "Third block error: " << exc.what() << std::endl;
	}


	std::cout << BOLD "Forth block" STD << std::endl;
	try
	{
		Bureaucrat holly("Holly", 2);
		std::cout << holly << std::endl;
		Form constitution("constitution", 1, 1);
		std::cout << constitution << std::endl;
		holly.gradeIncrem();
		std::cout << holly << std::endl;
		holly.signForm(constitution);
	}
	catch (std::exception & exc)
	{
		std::cerr << "Forth block error: " << exc.what() << std::endl;
	}
	return 0;
}
