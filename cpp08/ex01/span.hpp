/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:09:26 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/23 15:59:49 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{

	public:

		Span(unsigned int size);
		Span(const Span& from);
		~Span();

		Span& operator=(const Span& from);

		void	addNumber(int number);
		int		longestSpan() const;
		int		shortestSpan() const;
	
	private:
	
		unsigned int		_size;
		std::vector<int>	_vector;
};

#endif