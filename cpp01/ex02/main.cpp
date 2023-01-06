/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:31:27 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 19:42:39 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of string :          " << &string << std::endl;
	std::cout << "Address held by stringPTR :  " << stringPTR << std::endl;
	std::cout << "Address held by stringREF :  " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Value of string :            " << string << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed by stringREF : " << stringREF << std::endl;
}