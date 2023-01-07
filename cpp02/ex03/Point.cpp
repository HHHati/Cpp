/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:40:32 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 20:16:31 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed(0)), _y(Fixed(0))
{
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
}

Point::Point(const Point& from) : _x(from._x), _y(from._y)
{
}

Point::~Point(void)
{
}

Point& Point::operator=(const Point& from)
{
	(void)from;
	return *this;
}

Fixed const Point::getX(void) const
{
	return this->_x;
}

Fixed const Point::getY(void) const
{
	return this->_y;
}
