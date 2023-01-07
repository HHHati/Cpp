/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:55:45 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 12:33:24 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "DEBUG: " << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO: " << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING: " << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR: " << std::endl;
	harl.complain("ERROR");
	std::cout << "CASINO: " << std::endl;
	harl.complain("CASINO");
	return (0);
}
