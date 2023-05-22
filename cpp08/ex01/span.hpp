/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:09:26 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/22 17:39:12 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{

	public:

		Span(unsigned int size);
		~Span();

		void	addNumber(int number);
		int		longestSpan() const;
		int		shortestSpan() const;
	
	private:
	
		unsigned int		_size;
		std::vector<int>	_vector;
};

#endif