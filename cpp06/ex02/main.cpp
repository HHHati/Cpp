/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:57:32 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/17 15:17:33 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base* generate(void)
{
	srand((unsigned) time(NULL));
	switch(rand() % 3)
	{
		case 0:
			std::cout << "Type A class created." << std::endl;
			return new A;
		case 1:
			std::cout << "Type B class created." << std::endl;
			return new B;
		case 2:
			std::cout << "Type C class created." << std::endl;
			return new C;
	}
	return 0;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer is type A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Pointer is type B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Pointer is type C." << std::endl;
	else
		std::cout << "Pointer isn't A, B or C." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference is type A" << std::endl;
	}
	catch (std::exception& exception)
	{
		try
		{
			B& b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "Reference is type B" << std::endl;
		}
		catch (std::exception& exception)
		{
			try
			{
				C& c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "Reference is type C" << std::endl;
			}
			catch (std::exception& exception)
			{
				std::cout << "Reference isn't A, B or C." << std::endl;
			}
		}
	}
	
}

int	main()
{
	Base* base = generate();

	identify(base);
	identify(*base);

	delete base;
}