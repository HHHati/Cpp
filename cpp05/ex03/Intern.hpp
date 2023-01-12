/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:56:07 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 13:07:45 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern{

	public:

		Intern();
		Intern(const Intern& from);
		~Intern();

		Intern& operator=(const Intern& from);

		Form *makeForm(const std::string &name, const std::string &target) const;

		class WrongFormException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("invalid form type");
				}
		};

};

#endif

