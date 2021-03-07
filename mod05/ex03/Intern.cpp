//
// Created by Антон Чапарин on 07.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "Intern.hpp"
#include <iostream>

const std::string Intern::formNames[FORMS_AMOUNT] =
		{
				"ShrubberyCreationForm",
				"RobotomyRequestForm",
				"PresidentialPardonForm"
		};

Intern::Intern()
{
	forms[0] = new ShrubberyCreationForm("");
	forms[1] = new RobotomyRequestForm("");
	forms[2] = new PresidentialPardonForm("");
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern()
{
	for (int i = 0; i < FORMS_AMOUNT; i++)
		delete forms[i];
}

Intern &Intern::operator=(const Intern &other)
{
	if (this != &other)
	{

	}
	return *this;
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
	for (int i = 0; i < FORMS_AMOUNT; i++)
	{
		if (formNames[i] == name)
		{
			std::cout << "Intern creates <" << name << ">" << std::endl;
			return forms[i]->newForm(target);
		}
	}
	throw Intern::IncorrectFormNameException();
}

const char *Intern::IncorrectFormNameException::what() const throw()
{
	return "Intern: Incorrect form name";
}
