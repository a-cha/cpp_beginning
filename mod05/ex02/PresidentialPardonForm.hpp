//
// Created by Антон Чапарин on 06.03.2021.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	const std::string target;

public:
	explicit PresidentialPardonForm(const std::string & target);

	void execute(Bureaucrat const & executor) const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
