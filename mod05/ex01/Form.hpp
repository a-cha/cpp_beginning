//
// Created by Антон Чапарин on 06.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
#include <string>
#include <exception>

class Form
{
private:
	const std::string	name;
	const int			gradeToSign;
	const int			gradeToExecute;
	bool				isSigned;
	static void 		checkGrade(int grade);

public:
	Form(const std::string & name, const int gradeToSign, const int gradeToExecute);
	Form(const Form &other);
	~Form();

	Form &operator=(const Form &other);

	const std::string & getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getIsSigned() const;

	void beSigned(const Bureaucrat & signer);

	class GradeTooHighException : public std::exception { const char * what() const throw(); };
	class GradeTooLowException : public std::exception { const char * what() const throw(); };
};

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif //FORM_HPP
