/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:17:12 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/24 15:34:21 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap constructor called (default)" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called (" << name << ")" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap& from) : ClapTrap(from)
{
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called (" << this->_name << ")" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& from)
{
	this->_name = from._name;
	this->_hp = from._hp;
	this->_energy = from._energy;
	this->_damage = from._damage;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
		std::cout << "FragTrap " << this->_name << " is dead." << std::endl;
	else if (this->_energy <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy." << std::endl;
	else
	{
		this->_energy--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	}
}

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << " asks to high five!" << std::endl;
}