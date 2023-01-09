/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 21:06:11 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/09 01:05:39 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

		std::cout << "\n=============== creating forms ===============\n" << std::endl;

		Form form1("form1", 150, 150);
		std::cout << form1 << std::endl;
		Form form2("form2", 1, 1);
		std::cout << form2 << std::endl;

		std::cout << "\n=============== signing forms ================\n" << std::endl;

		form1.beSigned(boss);
		std::cout << form1 << std::endl;
		boss.signForm(form1);

		std::cout << "\n============= testing exceptions =============\n" << std::endl;

		// employee.signForm(form2);
		// form2.beSigned(employee);
		// Form form3("form3", 160, 160);
		// Form form4("form4", 0, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}