/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:01:46 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/30 10:41:04 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <list>
# include <deque>

bool	check_arg(int argc, char **argv, std::list<int> &_list, std::deque<int> &_deque);

template<typename T>
void insertionSort(T& container)
{
	int temp;
	typename T::iterator it;
	typename T::iterator prev;
	typename T::iterator index;
    for (it = container.begin(); it != container.end(); ++it)
	{
		temp = *it;
		index = it;
		while (index != container.begin()) {
			prev = index;
			--prev;
			if (*prev > temp) {
				*index = *prev;
				--index;
			}
			else
				break;
		}
		*index = temp;
	}
}

template <typename T>
void mergeInsertsort(T& container)
{
	size_t	len = container.size();

	if (len > 100)
	{
		typename T::iterator begin = container.begin();
		typename T::iterator mid = container.begin();
		std::advance(mid, container.size() / 2);
		typename T::iterator end = container.end();
		T left(begin, mid);
		T right(mid, end);
		if (left.size() > 1)
			mergeInsertsort(left);
		if (right.size() > 1)
			mergeInsertsort(right);
		std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
	}
	else
		insertionSort(container);
}

#endif