/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:24:15 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 14:30:54 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal& from)
{
	*this = from;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& from)
{
	this->_type = from._type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "The animal doesn't make any specific sound" << std::endl;
}

const std::string Animal::getType() const
{
	return this->_type;
}
