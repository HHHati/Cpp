/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:00:56 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/26 11:39:22 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<class T> void	print_test(T &param)
{
	std::cout << param << std::endl;
}

int	main()
{
	std::cout << "Test with char :\n" << std::endl;
	std::string test = "This is a test.";
	iter<const char>(test.c_str(), test.length(), print_test);
	std::cout << "\n\nTest with int :\n" << std::endl;
	int tab[] = {1, 2, 3, 4, 5};
	iter<int>(tab, 5, print_test);
}