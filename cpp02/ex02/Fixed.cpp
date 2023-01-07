/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:12:25 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 18:27:52 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_value = 0;
}

Fixed::Fixed(int nb)
{
	this->_value = (nb << _bits);
}

Fixed::Fixed(float nb)
{
	this->_value = (int)roundf(nb * (1 << _bits));
}

Fixed::Fixed(const Fixed& from)
{
	*this = from;
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator=(const Fixed& from)
{
	this->_value = from.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& from) const
{
	return this->_value > from._value;
}

bool Fixed::operator<(const Fixed& from) const
{
	return this->_value < from._value;
}

bool Fixed::operator>=(const Fixed& from) const
{
	return this->_value >= from._value;
}

bool Fixed::operator<=(const Fixed& from) const
{
	return this->_value <= from._value;
}

bool Fixed::operator==(const Fixed& from) const
{
	return this->_value == from._value;
}

bool Fixed::operator!=(const Fixed& from) const
{
	return this->_value != from._value;
}

Fixed Fixed::operator+(const Fixed& from)
{
	Fixed result;

	result.setRawBits(this->_value + from._value);
	return result;
}

Fixed Fixed::operator-(const Fixed& from)
{
	Fixed result;

	result.setRawBits(this->_value - from._value);
	return result;
}

Fixed Fixed::operator*(const Fixed& from)
{
	Fixed result(this->toFloat() * from.toFloat());
	return result;
}

Fixed Fixed::operator/(const Fixed& from)
{
	Fixed result(this->toFloat() / from.toFloat());
	return result;
}

Fixed& Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed& Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

int		Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << _bits);
}

int		Fixed::toInt(void) const
{
	return (int)this->_value >> _bits;
}

Fixed Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}
