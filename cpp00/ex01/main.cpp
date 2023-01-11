/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:17:26 by bade-lee          #+#    #+#             */
/*   Updated: 2023/01/11 14:17:27 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void check_input(std::string &info)
{
	if (std::cin.eof())
		exit(1);
	while (!info.compare("") || info[0] == ' ')
		std::getline(std::cin, info);
}

void add_contact(phonebook *phone)
{
	for (int i = 7; i > 0; i--)
		phone->setContact(phone->getContact(i - 1), i);
	std::string info;
	std::cout << "\n==============================\n" << std::endl;
	std::cout << "NEW CONTACT :\n" << std::endl;
	std::cout << "First name     : ";
	std::getline(std::cin, info);
	check_input(info);
	phone->getContact(0).setFirstName(info);
	std::cout << "Last name      : ";
	std::getline(std::cin, info);
	check_input(info);
	phone->getContact(0).setLastName(info);
	std::cout << "Nickname       : ";
	std::getline(std::cin, info);
	check_input(info);
	phone->getContact(0).setNickname(info);
	std::cout << "Phone number   : ";
	std::getline(std::cin, info);
	check_input(info);
	phone->getContact(0).setPhoneNumber(info);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, info);
	check_input(info);
	phone->getContact(0).setDarkestSecret(info);
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
	print_cell(contact.getFirstName());
	std::cout << "|";
	print_cell(contact.getLastName());
	std::cout << "|";
	print_cell(contact.getNickname());
	std::cout << "|" << std::endl;
}

void print_book(phonebook *phone)
{
	std::cout << "\nPHONEBOOK :\n";
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		print_contact(phone->getContact(i), i);
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

void	print_contact_details(phonebook *phone, int index)
{
	std::cout << "\n==============================\n" << std::endl;
	std::cout << "CONTACT :\n" << std::endl;
	std::cout << "First name     : " << phone->getContact(index).getFirstName() << std::endl;
	std::cout << "Last name      : " << phone->getContact(index).getLastName() << std::endl;
	std::cout << "Nickname       : " << phone->getContact(index).getNickname() << std::endl;
	std::cout << "Phone number   : " << phone->getContact(index).getPhoneNumber() << std::endl;
	std::cout << "Darkest decret : " << phone->getContact(index).getDarkestSecret() << std::endl;
	std::cout << "\n==============================\n" << std::endl;
}

int check_contact(phonebook *phone, int index)
{
	if (phone->getContact(index).getFirstName() == "")
	{
		std::cout << "\nEmpty contact selected\n" << std::endl;
		return 0;
	}
	return 1;
}

void search_contact(phonebook *phone)
{
	std::string index;
	print_book(phone);
	std::cout << "\nIndex : ";
	std::getline(std::cin, index);
	if (index.length() == 1 && !(index[0] < '1' || index[0] > '8'))
	{
		if (check_contact(phone, (int)index[0] - '0' - 1))
			print_contact_details(phone, (int)index[0] - '0' - 1);
	}
	else
		std::cout << "\nIndex has to be a number between 1 and 8\n" << std::endl;
}

int	instructions(void)
{
	std::string input;
	std::cout << "Enter ADD, SEARCH or EXIT :" << std::endl;
	std::getline(std::cin, input);
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
			search_contact(&phone);
		else if (instru == 1)
			add_contact(&phone);
	}
	return (0);
}
