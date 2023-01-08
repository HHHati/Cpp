/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:22:34 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:20:28 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(std::string const & type) : AMateria(type)
{
}

Cure::Cure(const Cure& from) : AMateria("Cure")
{
	*this = from;
}

Cure::~Cure(void)
{
}

Cure& Cure::operator=(const Cure& from)
{
	this->_type = from._type;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure("cure");
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
