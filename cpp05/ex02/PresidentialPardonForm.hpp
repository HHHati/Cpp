/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:05:26 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 21:06:33 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : virtual public Form{

	public:

		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm& from);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm& from);

		virtual void	execute(const Bureaucrat &executor) const;

};

#endif