/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:17:03 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:14:50 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria& from)
{
	*this = from;
}

AMateria::~AMateria(void)
{
}

AMateria& AMateria::operator=(const AMateria& from)
{
	this->_type = from._type;
	return *this;
}

std::string const&  AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}

