/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:32:59 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 15:33:57 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& from)
{
	this->_brain = new Brain(*from._brain);
	*this = from;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(const Dog& from)
{
	this->_type = from._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "WAF WAF WAF" << std::endl;
}

const std::string& Dog::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

void Dog::setIdea(int i, std::string idea)
{
	if (i < 100)
		return this->_brain->setIdea(i, idea);
}