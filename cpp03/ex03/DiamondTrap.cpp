/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:38:04 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 13:06:58 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	ClapTrap::_name = "default_clap_name";
	std::cout << "DiamondTrap constructor called (" << this->_name << ")" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap constructor called (" << name << ")" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& from)
{
	*this = from;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called (" << this->_name << ")" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& from)
{
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hello, I am DiamondTrap " << this->_name << " but my ClapTrap name is " << ClapTrap::_name << "!" << std::endl;
}