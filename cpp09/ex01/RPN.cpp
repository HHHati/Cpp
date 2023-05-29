/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:09:55 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/29 16:50:33 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
}

RPN::RPN(const RPN& from)
{
    *this = from;
}

RPN::~RPN(void)
{
}

RPN& RPN::operator=(const RPN& from)
{
	(void)from;
    return *this;
}

bool RPN::isValid(const std::string arg)
{
	if (arg.find_first_not_of("0123456789+-/* ") == std::string::npos)
		return true;
	return false;
}

void RPN::calculate(const std::string arg)
{
	if (!isValid(arg))
	{
		std::cout << "Error: Invalid character" << std::endl;
		return ;
	}
	for (size_t i = 0; i < arg.size(); i++)
	{
		char c = arg[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
		{
			int number = c - '0';
			_numbers.push(number);
		}
		else if (c == '+' && _numbers.size() >= 2)
		{
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a + b);
		}
		else if (c == '-' && _numbers.size() >= 2)
		{
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a - b);
		}
		else if (c == '*' && _numbers.size() >= 2)
		{
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a * b);
		}
		else if (c == '/' && _numbers.size() >= 2)
		{
			double b = _numbers.top();
			_numbers.pop();
			double a = _numbers.top();
			_numbers.pop();
			_numbers.push(a / b);
		}
	}
	if (_numbers.size() == 1)
	{
		double result = _numbers.top();
		_numbers.pop();
		std::cout << "Result: " << result << std::endl;
	}
	else
		std::cout << "Error: Insufficient operands" << std::endl;
}
