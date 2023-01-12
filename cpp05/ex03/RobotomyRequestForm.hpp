/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:05:31 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 21:06:31 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : virtual public Form{

	public:

		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm& from);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm& from);

		virtual void	execute(const Bureaucrat &executor) const;

};

#endif