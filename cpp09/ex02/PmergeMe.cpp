/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:01:43 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/30 10:55:09 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	check_arg(int argc, char **argv, std::list<int> &_list, std::deque<int> &_deque)
{
	std::string			word;
	std::stringstream	ss;
	long	l;
	char	*endptr = NULL;

    for (int i = 1; i < argc; i++)
        ss << argv[i] << " ";
	
    while (ss >> word)
	{
		endptr = NULL;
		l = strtol(word.c_str(), &endptr, 10);
		if (*endptr == '\0' && l >= 0 && l < INT_MAX)
		{
			_list.push_back(l);
			_deque.push_back(l);
		}
		else
		{
			std::cout << "Error: " << word <<  " ";
			return (false);
		}
	}
	return(true);
}