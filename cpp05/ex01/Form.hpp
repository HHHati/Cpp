/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:59:01 by bade-lee          #+#    #+#             */
/*   Updated: 2023/03/01 11:45:29 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

	public:

		Form(const std::string name, const int gradetosign, const int gradetoexec);
		Form(const Form& from);
		virtual ~Form();

		Form& operator=(const Form& from);

		const std::string getName(void) const;
		const std::string isSigned(void) const;
		int		getGradeToSign(void) const;
		int		getGradeToExec(void) const;
		void	beSigned(Bureaucrat& bureaucrat);
		

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("grade is too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("grade is too low");
				}
		};

		class FormAlreadySignedException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("form already signed");
				}
		};

	private:

		const std::string _name;
		bool _signed;
		const int _gradetosign;
		const int _gradetoexec;

};

std::ostream & operator<<(std::ostream & o, const Form& input);

#endif

