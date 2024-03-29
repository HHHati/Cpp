/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:00:27 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/04 13:31:10 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<class T> void	print(T &param)
{
	std::cout << param << std::endl;
}

template<class T> void	iter(T* ptr, size_t size, void(*fct)(T& param))
{
	for (size_t i = 0; i < size; i++)
		fct(ptr[i]);
}

#endif