//
// Created by Антон Чапарин on 06.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "AForm.hpp"
#include <iostream>

AForm::	AForm(const std::string & name, const int gradeToSign, const int gradeToExecute) :
	name(name),
	gradeToSign(gradeToSign),
	gradeToExecute(gradeToExecute),
	isSigned(false)
{
	checkGrade(this->gradeToSign);
	checkGrade(this->gradeToExecute);
}

AForm::AForm(const AForm &other) :
	name(other.name),
	gradeToSign(other.gradeToSign),
	gradeToExecute(other.gradeToExecute)
{
	*this = other;
}

AForm::~AForm() { }

AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
	{
		isSigned = other.isSigned;
	}
	return *this;
}

const std::string &AForm::getName() const
{
	return name;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

bool AForm::getIsSigned() const
{
	return isSigned;
}

void AForm::checkGrade(int grade)
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if (grade > 150)
		throw AForm::GradeTooLowException();
}

void AForm::beSigned(const Bureaucrat &signer)
{
	if (getGradeToSign() >= signer.getGrade())
		isSigned = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
}

std::ostream& operator<<(std::ostream &os, const AForm &other)
{
	os	<< "<" << other.getName() << ">, " << (other.getIsSigned() ? "" : "not ")
		<< "signed form. Grade to sign <" << other.getGradeToSign()
		<< ">, to execute <" << other.getGradeToExecute() << ">";
	return os;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Form: Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Form: Grade too low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Can't execute form (don't signed)";
}
