//
// Created by Антон Чапарин on 06.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef BUREAUCRAT_GPP
#define BUREAUCRAT_GPP

#include "AForm.hpp"
class AForm;
#include <string>
#include <iostream>

class Bureaucrat
{
private:
	std::string 		name;
	int 				grade;

public:
	Bureaucrat(std::string const & name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);

	std::string const & getName() const;
	int getGrade() const;

	void gradeIncrem();
	void gradeDecrem();
	void signForm(AForm & form) const;
	void executeForm(AForm const & form) const;

	class GradeTooHighException : public std::exception { const char * what() const throw(); };
	class GradeTooLowException : public std::exception { const char * what() const throw(); };
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

#endif //BUREAUCRAT_GPP
