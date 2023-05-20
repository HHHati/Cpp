/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:06:37 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/20 14:41:51 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iterator>
#include <array>
#include <vector>
#include <list>

int	main()
{
	std::cout << "┌────" << std::endl;
	std::cout << "| ARRAY TESTS :" << std::endl;
	std::array<int, 6> array = {0, 1, 2, 3, 4, 5};
	std::cout << "| Array : { ";
	for (size_t i = 0; i < array.size(); i++)
		std::cout << array.at(i) << " ";
	std::cout << "}" << std::endl;
	std::cout << "| Searching for element '0' -> at position [";
	std::cout << std::distance(array.begin(), easyfind(array, 0));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '3' -> at position [";
	std::cout << std::distance(array.begin(), easyfind(array, 3));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '5' -> at position [";
	std::cout << std::distance(array.begin(), easyfind(array, 5));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '8' -> at position [";
	std::cout << std::distance(array.begin(), easyfind(array, 8));
	std::cout << "]" << std::endl;
	std::cout << "└────" << std::endl;

	std::cout << "┌────" << std::endl;
	std::cout << "| VECTOR TESTS :" << std::endl;
	std::vector<int> vector;
	vector.push_back(0);
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);
	std::cout << "| Vector : { ";
	for (size_t i = 0; i < vector.size(); i++)
		std::cout << vector.at(i) << " ";
	std::cout << "}" << std::endl;
	std::cout << "| Searching for element '0' -> at position [";
	std::cout << std::distance(vector.begin(), easyfind(vector, 0));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '3' -> at position [";
	std::cout << std::distance(vector.begin(), easyfind(vector, 3));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '5' -> at position [";
	std::cout << std::distance(vector.begin(), easyfind(vector, 5));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '8' -> at position [";
	std::cout << std::distance(vector.begin(), easyfind(vector, 8));
	std::cout << "]" << std::endl;
	std::cout << "└────" << std::endl;


	std::cout << "┌────" << std::endl;
	std::cout << "| LIST TESTS :" << std::endl;
	std::list<int> list;
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	std::cout << "| List : { ";
	for (std::list<int>::iterator lst_iter = list.begin(); lst_iter != list.end(); lst_iter++)
		std::cout << *lst_iter << " ";
	std::cout << "}" << std::endl;
	list.push_front(0);
		std::cout << "| List : { ";
	for (std::list<int>::iterator lst_iter = list.begin(); lst_iter != list.end(); lst_iter++)
		std::cout << *lst_iter << " ";
	std::cout << "}" << std::endl;
	std::cout << "| Searching for element '0' -> at position [";
	std::cout << std::distance(list.begin(), easyfind(list, 0));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '3' -> at position [";
	std::cout << std::distance(list.begin(), easyfind(list, 3));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '5' -> at position [";
	std::cout << std::distance(list.begin(), easyfind(list, 5));
	std::cout << "]" << std::endl;
	std::cout << "| Searching for element '8' -> at position [";
	std::cout << std::distance(list.begin(), easyfind(list, 8));
	std::cout << "]" << std::endl;
	std::cout << "└────" << std::endl;
	return 0;
}