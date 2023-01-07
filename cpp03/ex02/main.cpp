/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:42:52 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 23:29:11 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap Chouchou("Chouchou");
	FragTrap Loulou("Loulou");

	Loulou.highFiveGuys();
	Chouchou.attack("Loulou");
	Loulou.takeDamage(0);
	Loulou.beRepaired(100);
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Chouchou.attack("Loulou");
	Loulou.takeDamage(0);
	Loulou.attack("Chouchou");
	Chouchou.takeDamage(30);
	
	return 0;
}