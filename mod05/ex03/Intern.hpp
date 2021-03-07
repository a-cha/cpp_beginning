//
// Created by Антон Чапарин on 07.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef INTERN_CPP
#define INTERN_CPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

#define FORMS_AMOUNT (3)

class Intern
{
private:
	const AForm*				forms[FORMS_AMOUNT];
	static const std::string	formNames[FORMS_AMOUNT];

public:
	Intern();
	Intern(const Intern &other);
	~Intern();

	Intern &operator=(const Intern &other);

	AForm *makeForm(const std::string & name, const std::string & target);

	class IncorrectFormNameException : public std::exception { const char * what() const throw(); };
};

#endif //INTERN_CPP
