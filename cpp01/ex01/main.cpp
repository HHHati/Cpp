/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:31:27 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/24 11:50:37 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int const count = 5;
	Zombie *horde = zombieHorde(count, "zombie");

	for (int i = 0; i < count; i++)
		horde[i].announce();
	delete [] horde;
}