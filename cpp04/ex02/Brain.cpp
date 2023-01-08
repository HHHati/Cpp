/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:13:40 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 15:34:34 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& from)
{
	*this = from;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& from)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = from._ideas[i];
	return *this;
}

const std::string& Brain::getIdea(int i) const
{
	return this->_ideas[i];
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 100)
		this->_ideas[i] = idea;
}