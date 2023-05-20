/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:07:03 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/20 14:00:43 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T> typename T::iterator easyfind(T& container, int i)
{
	typename T::iterator n = std::find(container.begin(), container.end(), i);
	if (n == container.end())
		return container.end();
	return n;
}

#endif