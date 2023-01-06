/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:17:26 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/06 14:44:24 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void add_contact(phonebook *phone)
{
	for (int i = 7; i > 0; i--)
		phone->repertory[i] = phone->repertory[i - 1];
	std::string info;
	std::cout << "\n==============================\n" << std::endl;
	std::cout << "NEW CONTACT :\n" << std::endl;
	std::cout << "First name :     ";
	std::cin >> info;
	phone->repertory[0].first_name = info;
	std::cout << "Last name :      ";
	std::cin >> info;
	phone->repertory[0].last_name = info;
	std::cout << "Nickname :       ";
	std::cin >> info;
	phone->repertory[0].nickname = info;
	std::cout << "Phone number :   ";
	std::cin >> info;
	phone->repertory[0].phone_number = info;
	std::cout << "Darkest secret : ";
	std::cin >> info;
	phone->repertory[0].darkest_secret = info;
	std::cout << "\n==============================\n" << std::endl;
}


void print_cell(std::string string)
{
	for (int n = 0; n < 10; n++)
	{
		if (n == 9 && string.length() > 10)
			std::cout << ".";
		else if (n < string.length())
			std::cout << string[n];
		else
			std::cout << " ";
	}
}

void print_contact(contact contact, int index)
{
	std::cout << "|";
	std::cout << index + 1 << "         ";
	std::cout << "|";
	print_cell(contact.first_name);
	std::cout << "|";
	print_cell(contact.last_name);
	std::cout << "|";
	print_cell(contact.nickname);
	std::cout << "|" << std::endl;
}

void print_book(phonebook *phone)
{
	std::cout << "\nPHONEBOOK :\n";
	std::cout << "=============================================" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		print_contact(phone->repertory[i], i);
	}
	std::cout << "=============================================" << std::endl;
}

int	instructions(void)
{
	std::string input;
	std::cout << "Enter ADD, SEARCH or EXIT :" << std::endl;
	std::cin >> input;
	if (!input.compare("ADD"))
		return (1);
	else if (!input.compare("SEARCH"))
		return (2);
	else if (!input.compare("EXIT") || std::cin.eof())
		return (3);
	return (0);
}

int	main(void)
{
	int instru;
	phonebook phone;
	while (1)
	{
		instru = instructions();
		if (instru == 3)
			return (0);
		else if (instru == 2)
			print_book(&phone);
		else if (instru == 1)
			add_contact(&phone);
	}
	return (0);
}
