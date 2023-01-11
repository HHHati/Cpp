/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:17:23 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 12:32:28 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void) {
	return ;
}

contact::~contact(void) {
	return ;
}

std::string contact::getFirstName()
{
	return this->_first_name;
}

std::string contact::getLastName()
{
	return this->_last_name;
}

std::string contact::getNickname()
{
	return this->_nickname;
}

std::string contact::getPhoneNumber()
{
	return this->_phone_number;
}

std::string contact::getDarkestSecret()
{
	return this->_darkest_secret;
}

void contact::setFirstName(std::string info)
{
	this->_first_name = info;
}

void contact::setLastName(std::string info)
{
	this->_last_name = info;
}

void contact::setNickname(std::string info)
{
	this->_nickname = info;
}

void contact::setPhoneNumber(std::string info)
{
	this->_phone_number = info;
}

void contact::setDarkestSecret(std::string info)
{
	this->_darkest_secret = info;
}
