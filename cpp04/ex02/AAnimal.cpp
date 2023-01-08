/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:24:15 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 17:11:44 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal constructor called" << std::endl;
	this->_type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal& from)
{
	*this = from;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& from)
{
	this->_type = from._type;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "The animal doesn't make any specific sound" << std::endl;
}

const std::string AAnimal::getType() const
{
	return this->_type;
}
