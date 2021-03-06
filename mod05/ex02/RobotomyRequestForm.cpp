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
	try
	{
		AForm::execute(executor);
		std::cout << "DRR @##% DRR #%@ DRRRR" << std::endl;
		std::cout << "<" << target << "> has been robotomized successfully 50% of the time" << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout << "<" << target << "> unable robotomized" << std::endl;
//		TODO не получается выбросить тот полученный эксепшн
		throw exc;
	}
}
