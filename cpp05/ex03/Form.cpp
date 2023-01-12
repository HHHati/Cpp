/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:59:37 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 21:05:12 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name, const int gradetosign, const int gradetoexec) : _name(name), _target(""), _signed(0), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
{
	if (gradetoexec > 150 || gradetosign > 150)
		throw GradeTooLowException();
	if (gradetoexec < 1 || gradetosign < 1)
		throw GradeTooHighException();
}

Form::Form(const std::string name, const std::string target, const int gradetosign, const int gradetoexec)  : _name(name), _target(target), _signed(0), _gradetosign(gradetosign), _gradetoexec(gradetoexec)
{
	if (gradetoexec > 150 || gradetosign > 150)
		throw GradeTooLowException();
	if (gradetoexec < 1 || gradetosign < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& from) : _name(from._name), _signed(from._signed), _gradetosign(from._gradetosign), _gradetoexec(from._gradetoexec)
{
	*this = from;
}

Form::~Form(void)
{
}

Form& Form::operator=(const Form& from)
{
	(void)from;
	return *this;
}

const std::string Form::getName(void) const
{
	return this->_name;
}

const std::string Form::getTarget(void) const
{
	return this->_target;
}

const std::string Form::isSigned(void) const
{
	if (this->_signed == 0)
		return "no";
	return "yes";
}

int		Form::getGradeToSign(void) const
{
	return this->_gradetosign;
}

int		Form::getGradeToExec(void) const
{
	return this->_gradetoexec;
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() >= this->_gradetosign)
		throw GradeTooLowException();
	if (this->_signed == 1)
		throw FormAlreadySignedException();
	this->_signed = 1;
}

std::ostream & operator<<(std::ostream & o, const Form & input)
{
	o << "Form " << input.getName() << ": ";
	o << "[signed : " << std::boolalpha << input.isSigned() << ", grade to sign : " << input.getGradeToSign() << ", grade to exec : " << input.getGradeToExec() << "]";
	return (o);
}