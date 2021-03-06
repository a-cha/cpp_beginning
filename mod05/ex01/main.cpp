
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat jim("Jim", 170);
		std::cout << jim << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << "Jim's error: " << exc.what() << std::endl;
	}

	try
	{
		Bureaucrat holly("Holly", 2);
		std::cout << holly << std::endl;;
		holly.gradeIncrem();
		std::cout << holly << std::endl;;
		holly.gradeIncrem();
	}
	catch (std::exception & exc)
	{
		std::cerr << "Holly's error: " << exc.what() << std::endl;
	}

	return 0;
}
