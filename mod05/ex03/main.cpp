
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "print.hpp"
#include <iostream>

int main()
{
	srand(time(nullptr));
	Intern	randomNoname;
	AForm	*pForm;

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
		std::cerr << RED "First block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Second block" STD << std::endl;
	try
	{
		AForm taxes("taxes", 100, 50);
		std::cout << taxes << std::endl;
		AForm laws("laws", 0, 5);
		std::cout << laws << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Second block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Third block" STD << std::endl;
	try
	{
		Bureaucrat holly("Holly", 2);
		std::cout << holly << std::endl;
		AForm constitution("constitution", 1, 1);
		std::cout << constitution << std::endl;
		holly.signForm(constitution);
		holly.gradeIncrem();
		std::cout << holly << std::endl;
		holly.gradeIncrem();
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Third block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Forth block" STD << std::endl;
	try
	{
		Bureaucrat holly("Holly", 2);
		std::cout << holly << std::endl;
		AForm constitution("constitution", 1, 1);
		std::cout << constitution << std::endl;
		holly.gradeIncrem();
		std::cout << holly << std::endl;
		holly.signForm(constitution);
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Forth block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Fifth block" STD << std::endl;
	try
	{
		Bureaucrat chuck("Chuck", 135);
		std::cout << chuck << std::endl;
		pForm = randomNoname.makeForm("ShrubberyCreationForm", "home");
		std::cout << *pForm << std::endl;
		chuck.executeForm(*pForm);
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Fifth block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Sixth block" STD << std::endl;
	try
	{
		Bureaucrat lindy("Lindy", 70);
		std::cout << lindy << std::endl;
		Bureaucrat loo("Loo", 40);
		std::cout << loo << std::endl;
		pForm = randomNoname.makeForm("RobotomyRequestForm", "Mars");
		std::cout << *pForm << std::endl;
		lindy.signForm(*pForm);
		loo.executeForm(*pForm);
		lindy.gradeIncrem();
		lindy.gradeIncrem();
		lindy.gradeIncrem();
		lindy.gradeIncrem();
		std::cout << lindy << std::endl;
		lindy.executeForm(*pForm);
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Sixth block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Seventh block" STD << std::endl;
	try
	{
		Bureaucrat anthony("Anthony", 40);
		std::cout << anthony << std::endl;
		pForm = randomNoname.makeForm("ShrubberyCreationForm", "home");
		std::cout << *pForm << std::endl;
		anthony.signForm(*pForm);
		anthony.executeForm(*pForm);
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Seventh block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Eighth block" STD << std::endl;
	try
	{
		Bureaucrat ashlie("Ashlie", 20);
		std::cout << ashlie << std::endl;
		pForm = randomNoname.makeForm("PresidentialPardonForm", "Galaxy");
		std::cout << *pForm << std::endl;
		ashlie.signForm(*pForm);
		ashlie.executeForm(*pForm);
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Eighth block error: " << exc.what() << STD << std::endl;
	}

	std::cout << BOLD "Ninth block" STD << std::endl;
	try
	{
		Bureaucrat ken("Ken", 3);
		std::cout << ken << std::endl;
		pForm = randomNoname.makeForm("PresidentialPardonForm", "Galaxy");
		std::cout << *pForm << std::endl;
		ken.signForm(*pForm);
		ken.executeForm(*pForm);
	}
	catch (std::exception & exc)
	{
		std::cerr << RED "Ninth block error: " << exc.what() << STD << std::endl;
	}

	delete pForm;

	return 0;
}
