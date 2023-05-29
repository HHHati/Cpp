/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:09:58 by bade-lee          #+#    #+#             */
/*   Updated: 2023/05/29 16:46:45 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
        std::cout << "Error: Invalid argument" << std::endl;
        return 1;
    }
    std::string arg = argv[1];
    RPN calculator;
    calculator.calculate(arg);
    return 0;
}