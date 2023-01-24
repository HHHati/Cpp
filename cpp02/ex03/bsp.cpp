/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:40:30 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/24 12:13:19 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area_abs(Fixed n)
{
	if (n < 0)
		return n * -1;
	else
		return n;
}

Fixed	area(Fixed x1, Fixed y1, Fixed x2, Fixed y2, Fixed x3, Fixed y3)
{
	return area_abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))/2);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed big = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	Fixed lila = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());
	Fixed lilb = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());
	Fixed lilc = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
	
	if (lila == 0 || lilb == 0 || lilc == 0)
		return 0;
	return big == lila + lilb + lilc;
}

