/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:57:15 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/18 15:09:04 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<class T> void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<class T> T		min(T& a, T& b)
{
	return a > b ? b : a;
}

template<class T> T		max(T& a, T& b)
{
	return a > b ? a : b;
}

#endif