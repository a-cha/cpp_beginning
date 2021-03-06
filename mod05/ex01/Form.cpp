//
// Created by Антон Чапарин on 06.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "Form.hpp"
#include <iostream>

Form::	Form(const std::string & name, const int gradeToSign, const int gradeToExecute) :
	name(name),
	gradeToSign(gradeToSign),
	gradeToExecute(gradeToExecute),
	isSigned(false)
{
	checkGrade(this->gradeToSign);
	checkGrade(this->gradeToExecute);
}

Form::Form(const Form &other) :
	name(other.name),
	gradeToSign(other.gradeToSign),
	gradeToExecute(other.gradeToExecute)
{
	*this = other;
}

Form::~Form() { }

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		isSigned = other.isSigned;
	}
	return *this;
}

const std::string &Form::getName() const
{
	return name;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExecute() const
{
	return gradeToExecute;
}

bool Form::getIsSigned() const
{
	return isSigned;
}

void Form::checkGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

void Form::beSigned(const Bureaucrat &signer)
{
	if (getGradeToSign() >= signer.getGrade())
		isSigned = true;
}

std::ostream& operator<<(std::ostream &os, const Form &other)
{
	os	<< "<" << other.getName() << ">, " << (other.getIsSigned() ? "" : "not ")
		<< "signed form. Grade to sign <" << other.getGradeToSign()
		<< ">, to execute <" << other.getGradeToExecute() << ">";
	return os;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form: Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade too low";
}
