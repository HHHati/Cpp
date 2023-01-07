/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:42:52 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 23:07:15 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap Jedi("Jedi");
	ScavTrap Sith("Sith");

	Sith.guardGate();
	Jedi.attack("Sith");
	Sith.takeDamage(0);
	Jedi.beRepaired(20);
	Sith.attack("Jedi");
	Jedi.takeDamage(20);
	Jedi.beRepaired(10);
	Sith.beRepaired(20);
	Sith.attack("Jedi");
	Jedi.takeDamage(20);
	Jedi.beRepaired(10);
	Sith.guardGate();
	
	return 0;
}