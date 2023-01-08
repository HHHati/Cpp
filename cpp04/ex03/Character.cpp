/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:43:46 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:51:40 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->_name = name;	
	this->_index = -1;
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = NULL;
		this->_floor[i] = NULL;
	}
}

Character::Character(const Character& from)
{
	*this = from;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		if (this->_floor[i])
			delete this->_floor[i];
	}
}

Character& Character::operator=(const Character& from)
{
	this->_name = from._name;
	for (int i = 0; i < 4; i++)
	{
		if (from._inv[i])
			this->_inv[i] = from._inv[i]->clone();
		else
			this->_inv[i] = NULL;
		this->_floor[i] = NULL;
	}
	this->_index = -1;
	return *this;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inv[i] == NULL)
		{
			_inv[i] = m;
			m = NULL;
			break ;
		}
	}
	if (m != NULL)
		this->let(m);
	
}

void Character::unequip(int idx)
{
	if (this->_inv[idx])
	{
		this->let(_inv[idx]);
		this->_inv[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_inv[idx] != NULL)
			this->_inv[idx]->use(target);
		else
			std::cout << "* " << this->_name << " tried to use an empty slot (" << idx << ") *" << std::endl;
	}
}

void Character::let(AMateria * m)
{
	this->_index++;
	if (this->_index == 4)
	{
		this->_index = 0;
		delete this->_floor[0];
	}
	this->_floor[this->_index] = m;
}