/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:22:29 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:20:20 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(std::string const & type) : AMateria(type)
{
}

Ice::Ice(const Ice& from) : AMateria("ice")
{
	*this = from;
}

Ice::~Ice(void)
{
}

Ice& Ice::operator=(const Ice& from)
{
	this->_type = from._type;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice("ice");
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
