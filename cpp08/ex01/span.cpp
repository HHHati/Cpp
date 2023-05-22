/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:08:48 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/22 18:02:05 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size) : _size(size)
{
}

Span::~Span(void)
{
}

void	Span::addNumber(int number)
{
	if (this->_vector.size() >= this->_size)
		throw std::exception();
	this->_vector.push_back(number);
}

int	Span::longestSpan() const
{
	if (this->_vector.size() < 2)
		throw std::exception();
	int max = *std::min_element(this->_vector.begin(), this->_vector.end());
	int min = *std::max_element(this->_vector.begin(), this->_vector.end());
	return min - max;
}

int	Span::shortestSpan() const
{
	if (this->_vector.size() < 2)
		throw std::exception();
	std::vector<int> vector(this->_vector);
	std::sort(vector.begin(), vector.end());
	int shortest = vector[1] - vector[0];
	for (size_t i = 2; i < vector.size(); i++)
	{
		if (vector[i] - vector[i - 1] < shortest)
			shortest = vector[i] - vector[i - 1];
	}
	return shortest;
}