/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:55:45 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 13:02:21 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	int i = 0;
	if (argc != 2)
		std::cout << "Error: Invalid arguments" << std::endl;
	else
	{
		std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		while (argv[1] != levels[i] && i < 4)
		{
			i++;
			if (i == 4)
			{
				std::cout << "[ Probably complaining about insignificant problem ]" << std::endl;
				return (0);
			}
		}
		while (i < 4)
		{
			switch (i)
			{
				case 0:
					std::cout << "[ " << levels[i] << " ]" << std::endl;
					harl.complain(levels[i]);
					std::cout << std::endl;
					break;
				case 1:
					std::cout << "[ " << levels[i] << " ]" << std::endl;
					harl.complain(levels[i]);
					std::cout << std::endl;
					break;
				case 2:
					std::cout << "[ " << levels[i] << " ]" << std::endl;
					harl.complain(levels[i]);
					std::cout << std::endl;
					break;
				case 3:
					std::cout << "[ " << levels[i] << " ]" << std::endl;
					harl.complain(levels[i]);
					std::cout << std::endl;
					break;
			}
			i++;
		}
	}
}
