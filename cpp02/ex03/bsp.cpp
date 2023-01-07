/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:40:30 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 20:32:25 by bade-lee         ###   ########.fr       */
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



// float	area(float x1, float y1, float x2, float y2, float x3, float y3)
// {
// 	return abs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2))/2);
// }

// bool	bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	float big = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
// 	float lila = area(point.getX().toFloat(), point.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
// 	float lilb = area(a.getX().toFloat(), a.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
// 	float lilc = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
// 	if (big == lila + lilb + lilc)
// 		return 1;
// 	else
// 		return 0;
// }


		