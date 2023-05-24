/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:09:29 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/24 15:43:59 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "┌────" << std::endl;
	std::cout << "| SUBJECT TEST :" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "| " << sp.shortestSpan() << std::endl;
	std::cout << "| " << sp.longestSpan() << std::endl;
	std::cout << "└────" << std::endl;
	
	std::cout << "┌────" << std::endl;
	std::cout << "| LITTLE TEST :" << std::endl;
	Span little = Span(7);
	little.addNumber(3);
	little.addNumber(6);
	little.addNumber(2);
	little.addNumber(22);
	little.addNumber(15);
	little.addNumber(12);
	little.addNumber(-3);
	std::cout << "| Vector : { 3 6 8 2 22 15 12 -3}" << std::endl;
	std::cout << "| Shortest span : " << little.shortestSpan() << std::endl;
	std::cout << "| Longest Span  :" << little.longestSpan() << std::endl;
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
	superbig.addMultNumber(10000);
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
		std::cerr << "| Too much numbers (add)   : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(100);
		Exception.addMultNumber(101);
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Too much numbers (mult1) : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(100);
		Exception.addNumber(1);
		Exception.addMultNumber(100);
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Too much numbers (mult2) : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Shortest with 0 number   : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Longest with 0 number    : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.addNumber(4);
		Exception.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Shortest with 1 number   : " << e.what() << '\n';
	}
	try
	{
		Span Exception = Span(2);
		Exception.addNumber(4);
		Exception.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << "| Longest with 1 number    : " << e.what() << '\n';
	}
	std::cout << "└────" << std::endl;

	return 0;
}