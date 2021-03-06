//
// Created by Антон Чапарин on 06.03.2021.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	const std::string target;

public:
	explicit ShrubberyCreationForm(const std::string & target);

	void execute(Bureaucrat const & executor) const;

	class ErrorCreateFileException : public std::exception { const char * what() const throw(); };
};


#endif //EX02_SHRUBBERYCREATIONFORM_HPP
