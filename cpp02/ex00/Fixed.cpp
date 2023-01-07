/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:12:25 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 13:58:42 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& from)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = from;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& from)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = from.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member fonction called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member fonction called" << std::endl;
	this->_value = raw;
}
