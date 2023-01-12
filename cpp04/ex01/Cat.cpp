/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:33:01 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/12 14:57:43 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& from)
{
	this->_brain = new Brain(*from._brain);
	*this = from;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(const Cat& from)
{
	this->_type = from._type;
	*this->_brain = *from._brain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MEEEEOOOOOOW" << std::endl;
}

const std::string& Cat::getIdea(int i) const
{
	return this->_brain->getIdea(i);
}

void Cat::setIdea(int i, std::string idea)
{
	if (i < 100)
		return this->_brain->setIdea(i, idea);
}