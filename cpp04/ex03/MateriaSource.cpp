/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:24:22 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/08 20:22:40 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_mem[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& from)
{
	*this = from;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_mem[i])
			delete this->_mem[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& from)
{
	for (int i = 0; i < 4; i++)
	{
		if (from._mem[i])
			this->_mem[i] = from._mem[i]->clone();
		else
			this->_mem[i] = NULL;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_mem[i])
		{
			_mem[i] = m;
			m = NULL;
			break ;
		}
	}
	if (m)
		delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_mem[i] && this->_mem[i]->getType() == type)
			return this->_mem[i]->clone();
	}
	return 0;
}
