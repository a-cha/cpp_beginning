//
// Created by Антон Чапарин on 06.03.2021.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
		AForm("PresidentialPardonForm", 25, 5),
		target(target)
{ }

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox" << std::endl;
}
