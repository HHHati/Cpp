/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:06:11 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 22:13:54 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "\n============ creating bureaucrats ============\n" << std::endl;

		Bureaucrat boss("boss", 1);
		std::cout << boss << std::endl;

		Bureaucrat employee("employee", 75);
		std::cout << employee << std::endl;

		Bureaucrat intern("intern", 150);
		std::cout << intern << std::endl;

		std::cout << "\n============ upgrade bureaucrats =============\n" << std::endl;

		employee.upGrade();
		std::cout << employee << std::endl;
		intern.upGrade();
		std::cout << intern << std::endl;

		std::cout << "\n=========== downgrade bureaucrats ============\n" << std::endl;

		employee.downGrade();
		std::cout << employee << std::endl;
		intern.downGrade();
		std::cout << intern << std::endl;

//		std::cout << "\n============= testing exceptions =============\n" << std::endl;

//		Bureaucrat toohigh("toohigh", 0);
//		Bureaucrat toolow("toolow", 160);
//		boss.upGrade();	
//		intern.downGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}