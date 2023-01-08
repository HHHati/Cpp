/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:06:09 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 22:13:17 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& from)
{
	*this = from;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& from)
{
	this->_grade = from.getGrade();
	return *this;
}

const std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::upGrade(void)
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downGrade(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & input)
{
	o << input.getName() << ", bureaucrat grade " << input.getGrade();
	return (o);
}

