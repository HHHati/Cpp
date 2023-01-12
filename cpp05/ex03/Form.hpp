/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 23:59:01 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 21:05:51 by bade-lee         ###   ########.fr       */
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
		Form(const std::string name, const std::string target, const int gradetosign, const int gradetoexec);
		Form(const Form& from);
		~Form();

		Form& operator=(const Form& from);

		const std::string getName(void) const;
		const std::string getTarget(void) const;
		const std::string isSigned(void) const;
		int		getGradeToSign(void) const;
		int		getGradeToExec(void) const;
		void	beSigned(Bureaucrat& bureaucrat);

		virtual void	execute(const Bureaucrat &executor) const = 0;

		
		
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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("form not signed");
				}
		};

	protected:

		const std::string _name;
		const std::string _target;
		bool _signed;
		const int _gradetosign;
		const int _gradetoexec;

};

std::ostream & operator<<(std::ostream & o, const Form& input);

#endif

