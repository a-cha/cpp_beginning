//
// Created by Антон Чапарин on 06.03.2021.
// Copyright (c) 2021 a-cha. All rights reserved.
//

#include "Bureaucrat.hpp"
#include "print.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) :
	name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat() { }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->grade = other.grade;
	}
	return *this;
}

std::string const & Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::gradeIncrem()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::gradeDecrem()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(AForm & form) const
{
	try
	{
		form.beSigned(*this);
		std::cout	<< "<" << getName() << "> signs <"
					<< form.getName() << ">" << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout << RED "<" << getName() << "> cannot sign <"
				  << form.getName() << "> because <bureaucrat hasn't enough grade>"
				  << STD << std::endl;

	}
}

void Bureaucrat::executeForm(const AForm &form) const
{
	try
	{
		form.execute(*this);
		std::cout	<< "<" << getName() << "> executes <" << form.getName() << ">" << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout	<< RED "<" << getName() << "> can't executes <" << form.getName()
					<< "> because <" << exc.what() << ">" << STD << std::endl;
	}
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &other)
{
	os << "<" << other.getName() << ">, bureaucrat grade <" << other.getGrade() << ">";
	return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: Grade too low";
}
