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

class AForm
{
private:
	const std::string	name;
	const int			gradeToSign;
	const int			gradeToExecute;
	bool				isSigned;
	static void 		checkGrade(int grade);

public:
	AForm(const std::string & name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	virtual ~AForm();

	AForm &operator=(const AForm &other);

	const std::string & getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getIsSigned() const;

	void beSigned(const Bureaucrat & signer);
	virtual void execute(Bureaucrat const & executor) const;
	virtual AForm *newForm(const std::string &target) const;

	class GradeTooHighException : public std::exception { const char * what() const throw(); };
	class GradeTooLowException : public std::exception { const char * what() const throw(); };
	class FormNotSignedException : public std::exception { const char * what() const throw(); };
};

std::ostream& operator<<(std::ostream& os, const AForm& other);

#endif //FORM_HPP
