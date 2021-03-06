//
// Created by Антон Чапарин on 06.03.2021.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	const std::string target;

public:
	explicit RobotomyRequestForm(const std::string & target);

	void execute(Bureaucrat const & executor) const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
