/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:06:26 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/09 00:46:29 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat{

	public:

		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& from);
		virtual ~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& from);

		const std::string getName(void) const;
		int		getGrade(void) const;
		void	upGrade(void);
		void	downGrade(void);
		void	signForm(Form& form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat::GradeTooHighException");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat::GradeTooLowException");
				}
		};

	private:

		const std::string _name;
		int _grade;

};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & input);

#endif

