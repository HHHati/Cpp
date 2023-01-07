/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 13:21:33 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 20:35:17 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
	Point a1(0, 0);
	Point b1(10, 30);
	Point c1(20, 0);
	Point point1(10, 15);
	std::cout << "Is in  : " << bsp(a1, b1, c1, point1) << std::endl;

	Point a2(0, 0);
	Point b2(10, 30);
	Point c2(20, 0);
	Point point2(30, 15);
	std::cout << "Is out : " << bsp(a2, b2, c2, point2) << std::endl;

	Point a3(0, 0);
	Point b3(10, 30);
	Point c3(20, 0);
	Point point3(0, 15);
	std::cout << "Is on  : " << bsp(a3, b3, c3, point3) << std::endl;
}