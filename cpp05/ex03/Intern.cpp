/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:56:09 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 13:06:26 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& from)
{
	*this = from;
}

Intern::~Intern(void)
{
}

Intern& Intern::operator=(const Intern& from)
{
	(void)from;
	return *this;
}

Form* Intern::makeForm(const std::string &name, const std::string &target) const
{
	if (!(name == "presidential pardon" || name == "robotomy request" || name == "shrubbery creation"))
	 	throw WrongFormException();
	std::string formnames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;
	Form* form = NULL;
	while (formnames[i] != name && i < 3)
		i++;
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
	}
	std::cout << "Intern creates " << name << std::endl;
	return form;
}
