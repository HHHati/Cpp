/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:34:49 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/17 14:46:14 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main()
{
	Data* ptr = new Data;
	std::cout << "Base poiner  : " << ptr << std::endl;

	uintptr_t serialized = serialize(ptr);
	std::cout << "Serialized   : " << serialized << std::endl;

	Data* deserialized = deserialize(serialized);
	std::cout << "Deserialized : " << deserialized << std::endl;

	delete ptr;
}