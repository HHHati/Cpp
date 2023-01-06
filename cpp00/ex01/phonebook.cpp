/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:05:06 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 12:49:35 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::phonebook(void) {
	for (int i = 0; i < 8; i++)
	{
		this->repertory[i].first_name = "";
		this->repertory[i].last_name = "";
		this->repertory[i].nickname = "";
		this->repertory[i].phone_number = "";
		this->repertory[i].darkest_secret = "";
	}
	return ;
}

phonebook::~phonebook(void) {
	return ;
}