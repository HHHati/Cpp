/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:05:06 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 13:09:42 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void) {
	for (int i = 0; i < 8; i++)
	{
		this->_repertory[i].setFirstName("");
		this->_repertory[i].setLastName("");
		this->_repertory[i].setNickname("");
		this->_repertory[i].setPhoneNumber("");
		this->_repertory[i].setDarkestSecret("");
	}
	return ;
}

phonebook::~phonebook(void) {
	return ;
}

contact &phonebook::getContact(int index)
{
	return this->_repertory[index];
}

void	phonebook::setContact(contact contact, int index)
{
	this->_repertory[index].setFirstName(contact.getFirstName());
	this->_repertory[index].setLastName(contact.getLastName());
	this->_repertory[index].setNickname(contact.getNickname());
	this->_repertory[index].setPhoneNumber(contact.getPhoneNumber());
	this->_repertory[index].setDarkestSecret(contact.getDarkestSecret());
}

