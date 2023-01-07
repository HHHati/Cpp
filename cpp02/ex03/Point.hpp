/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:40:15 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 20:13:36 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point& from);
		~Point(void);

		Point& operator=(const Point& from);

		Fixed const getX(void) const;
		Fixed const getY(void) const;

	private:

		Fixed const _x;
		Fixed const _y;
		
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif