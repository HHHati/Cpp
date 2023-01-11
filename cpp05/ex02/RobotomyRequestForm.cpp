/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:05:29 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 21:27:04 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("robotomyrequest", target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& from) : Form(from)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& from)
{
	this->Form::operator=(from);
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{

	if (this->isSigned() == "no")
		throw FormNotSignedException();
	if (executor.getGrade() >= this->getGradeToExec())
		throw GradeTooLowException();
	std::cout << "* some drilling sounds *" << std::endl;
	srand((unsigned) time(NULL));
	if (std::rand() % 2)
		std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomy on " << this->getTarget() << " has failed." << std::endl;
}