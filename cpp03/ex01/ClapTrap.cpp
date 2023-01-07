/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:40:32 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/07 23:32:20 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hp(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap constructor called (" << this->_name << ")" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap constructor called (" << name << ")" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& from) : _name(from._name), _hp(from._hp), _energy(from._energy), _damage(from._damage)
{
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called (" << this->_name << ")" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& from)
{
	this->_name = from._name;
	this->_hp = from._hp;
	this->_energy = from._energy;
	this->_damage = from._damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
	else
	{
		this->_energy--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	else
	{
		this->_hp -= amount;
		if (this->_hp <= 0)
			std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage and dies!" << std::endl;
		else
			std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
	else if (this->_energy <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy." << std::endl;
	else
	{
		this->_energy--;
		this->_hp += amount;
		std::cout << "ClapTrap " << this->_name << " repares itself and gains " << amount << " hit point!" << std::endl;
	}
}

