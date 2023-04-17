/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:18:39 by bade-lee          #+#    #+#             */
/*   Updated: 2023/04/17 14:20:10 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Conversion value(argv[1]);
		value.convert();
	}
	else
		std::cout << "Wrong synthax !" << std::endl;
	return 0;
}