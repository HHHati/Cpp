/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:09:29 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/22 18:36:00 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "┌────" << std::endl;
	std::cout << "| GOOD TEST :" << std::endl;
	Span span = Span(5);
	span.addNumber(3);
	span.addNumber(6);
	span.addNumber(2);
	span.addNumber(22);
	span.addNumber(15);
	std::cout << "| Vector : { 3 6 8 2 22 15 }" << std::endl;
	std::cout << "| Shortest span : " << span.shortestSpan() << std::endl;
	std::cout << "| Longest Span  :" << span.longestSpan() << std::endl;
	std::cout << "└────" << std::endl;
	
	std::cout << "┌────" << std::endl;
	std::cout << "| BIG TEST :" << std::endl;
	Span big = Span(100);
	for (int i = 1; i <= 100; i++)
		big.addNumber(i);
	std::cout << "| Vector : numbers from 1 to 100" << std::endl;
	std::cout << "| Shortest span : " << big.shortestSpan() << std::endl;
	std::cout << "| Longest Span  :" << big.longestSpan() << std::endl;
	std::cout << "└────" << std::endl;


	std::cout << "┌────" << std::endl;
	std::cout << "| SUPER BIG TEST :" << std::endl;
	Span superbig = Span(10000);
	int random;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
	{
		random = rand() % RAND_MAX + 1;
		superbig.addNumber(random);
	}
	std::cout << "| Vector : 10000 random numbers" << std::endl;
	std::cout << "| Shortest span : " << superbig.shortestSpan() << std::endl;
	std::cout << "| Longest Span  :" << superbig.longestSpan() << std::endl;
	std::cout << "└────" << std::endl;
	
	std::cout << "┌────" << std::endl;
	std::cout << "| EXCEPTIONS TEST :" << std::endl;
	try
	{
		Span Exception = Span(2);
		Exception.addNumber(4);
		Exception.addNumber(5);
		Exception.addNumber(15);
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Too much numbers       : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Shortest with 0 number : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Longest with 0 number  : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.addNumber(4);
		Exception.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Shortest with 1 number : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.addNumber(4);
		Exception.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Longest with 1 number  : " << e.what() << '\n';
	}
	std::cout << "└────" << std::endl;

	return 0;
}