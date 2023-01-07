/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:42:52 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 21:39:27 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Michel("Michel");
	ClapTrap Paul("Paul");
	ClapTrap Claude("Claude");

	Michel.attack("Paul");
	Paul.takeDamage(0);
	Paul.attack("Michel");
	Claude.attack("Michel");
	Michel.takeDamage(0);
	Michel.beRepaired(1);
	Claude.takeDamage(10);
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Paul.attack("a random guy");
	Claude.beRepaired(2);
	
	return 0;
}