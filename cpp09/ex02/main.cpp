/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:01:41 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/30 11:01:06 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Error: Invalid arguments" << "\n";
		return(EXIT_FAILURE);
	}
	std::list<int>		_list;
	std::deque<int>		_deque;
	if (check_arg(argc, argv, _list, _deque) == false)
	{
		std::cerr << "parameter must be a positive integer value" << "\n";
		return (EXIT_FAILURE);
	}
	std::cout << "Before:	";
 	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::clock_t start_time = std::clock();
    mergeInsertsort(_list);
    std::clock_t end_time = std::clock();
	std::cout << "After:	";
 	for (std::list<int>::iterator it = _list.begin(); it != _list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	double res_time = 1000000.0 * (end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _list.size() << " elements with std::list<int> sort: " << res_time << " us" << std::endl;
	start_time = std::clock();
    mergeInsertsort(_deque);
    end_time = std::clock();
	res_time = 1000000.0 * (end_time - start_time) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque<int> sort: " << res_time << " us" << std::endl;
    return 0;
}