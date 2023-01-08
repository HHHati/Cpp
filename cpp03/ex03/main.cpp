/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:42:52 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 13:13:52 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	ClapTrap Chat("Chat");
	ScavTrap Chien("Chien");
	FragTrap Souris("Souris");
	DiamondTrap Oiseau("Oiseau");

	Chat.attack("Chien");
	Chien.takeDamage(0);
	Chien.attack("Chat");
	Chat.takeDamage(20);
	Chien.guardGate();
	Souris.highFiveGuys();
	Oiseau.whoAmI();
	Oiseau.guardGate();
	Oiseau.highFiveGuys();
	
	return 0;
}