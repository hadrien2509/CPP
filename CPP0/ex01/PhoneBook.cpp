/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:06:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/11 17:32:51 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
using namespace std;

void	PhoneBook::move_contacts(void)
{
	for (int i = PhoneBook::nbr_of_contacts - 1; i > 0; --i)
		PhoneBook::array[i] = PhoneBook::array[i - 1];
}

void	PhoneBook::print_column(char *str)
{
	for (int i = 0; i < (10 - (int)strlen(str)); ++i)
		std::cout << " ";
	if (10 - (int)strlen(str) < 0)
	{
		for (int i = 0; i < 9; ++i)
			std::cout << str[i];
		std::cout << ".";
	}
	else
		std::cout << str;
	std::cout << "|";
}

void	PhoneBook::search_contact(void)
{
	std::cout << endl;
	for (int i = 0; i < PhoneBook::nbr_of_contacts; ++i)
	{
		std::cout << i;
		std::cout << "|";
		PhoneBook::print_column(PhoneBook::array[i].first_name);
		PhoneBook::print_column(PhoneBook::array[i].last_name);
		PhoneBook::print_column(PhoneBook::array[i].nickname);
		std::cout << endl;
	}
	int	index;
	while (42)
	{
		std::cout << endl;
		std::cout << "Index of the contact you're looking for : " << endl;
		std::cin >> index;
		if (index < 0 || index > PhoneBook::nbr_of_contacts - 1)
			std::cout << "/!\\ Invalid index" << endl;
		else
			break ;
	}
	std::cout << "First name : " << PhoneBook::array[index].first_name << endl;
	std::cout << "Last name : " << PhoneBook::array[index].last_name << endl;
	std::cout << "Nickname : " << PhoneBook::array[index].nickname << endl;
	std::cout << "Phone number : " << PhoneBook::array[index].phone_number << endl;
	std::cout << "Darkest secret : " << PhoneBook::array[index].darkest_secret << endl;
}

void	PhoneBook::add_contact(void)
{
	Contact instance;

	instance.first_name = new char;
	instance.last_name = new char;
	instance.nickname = new char;
	instance.phone_number = new char;
	instance.darkest_secret = new char;
	std::cout << "First name : ";
	std::cin >> instance.first_name;
	std::cout << "Last name : ";
	std::cin >> instance.last_name;
	std::cout << "Nickname : ";
	std::cin >> instance.nickname;
	std::cout << "Phone number : ";
	std::cin >> instance.phone_number;
	std::cout << "Darkest secret : ";
	std::cin >> instance.darkest_secret;

	if (PhoneBook::nbr_of_contacts < 8)
		PhoneBook::nbr_of_contacts++;
	PhoneBook::move_contacts();
	PhoneBook::array[0] = instance;
}

int	main(void)
{
	char		*str = new char;
	PhoneBook	instance;

	instance.nbr_of_contacts = 0;
	while (1)
	{
		std::cin >> str;
		if (strcmp(str, "ADD") == 0)
		{
			instance.add_contact();
			std::cout << endl;
		}
		if (strcmp(str, "SEARCH") == 0)
		{
			instance.search_contact();
			std::cout << endl;
		}
		// for (int i = 0; i < instance.nbr_of_contacts; ++i)
		// 	std::cout << instance.array[i].first_name;
		if (strcmp(str, "EXIT") == 0)
			break ;
	}
	return 0;
}