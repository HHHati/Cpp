/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:33:50 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/24 15:28:10 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap constructor called (" << this->_name << ")" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called (" << name << ")" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& from) : ClapTrap(from)
{
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called (" << this->_name << ")" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& from)
{
	this->_name = from._name;
	this->_hp = from._hp;
	this->_energy = from._energy;
	this->_damage = from._damage;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead." << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy." << std::endl;
	else
	{
		this->_energy--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered in Gate keeper mode!" << std::endl;
}