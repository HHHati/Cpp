/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:05:24 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 21:05:07 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("pardonform", target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& from) : Form(from)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& from)
{
	this->Form::operator=(from);
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	(void) executor;
	if (this->isSigned() == "no")
		throw FormNotSignedException();
	if (executor.getGrade() >= this->getGradeToExec())
		throw GradeTooLowException();
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}
