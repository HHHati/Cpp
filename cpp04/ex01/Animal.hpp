/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:24:13 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 16:16:13 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include "Brain.hpp"

class Animal{

	public:

		Animal();
		Animal(const Animal& from);
		virtual ~Animal();

		Animal& operator=(const Animal& from);

		virtual void makeSound() const;
		const std::string getType() const;

	protected:

		std::string _type;

};

#endif