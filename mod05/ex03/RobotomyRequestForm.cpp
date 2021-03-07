//
// Created by Антон Чапарин on 06.03.2021.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
		AForm("RobotomyRequestForm", 72, 45),
		target(target)
{ }

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);
	std::cout << "DRR @##% DRR #%@ DRRRR" << std::endl;
	std::cout << "<" << target
			  << (rand() % 2 ? "> has been robotomized successfully"
							 : "> unable robotomized") << std::endl;
}

AForm *RobotomyRequestForm::newForm(const std::string & t) const
{
	return new RobotomyRequestForm(t);
}
