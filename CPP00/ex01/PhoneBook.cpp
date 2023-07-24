/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:06:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/14 16:59:43 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::_move_contacts(void)
{
	for (int i = PhoneBook::nbr_of_contacts - 1; i > 0; --i)
		this->array[i] = this->array[i - 1];
}

void	PhoneBook::_print_column(std::string str)
{
	std::string	res;

	if (str.length() > 10)
	{
		res = str.substr(0, 9);
		res.replace(9, 1, ".");
	}
	else
		res = str;
	std::cout << std::setw(10) << res << "|";
}

bool	PhoneBook::_string_is_num(std::string str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}


void	PhoneBook::_print_header(void)
{
	std::cout << MSG_SEPARATOR << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME";
	std::cout << "|" << std::endl;
	std::cout << MSG_SEPARATOR << std::endl;
}

void	PhoneBook::_print_contacts(void)
{
	PhoneBook::_print_header();
	for (int i = 0; i < PhoneBook::nbr_of_contacts; ++i)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		PhoneBook::_print_column(this->array[i].first_name);
		PhoneBook::_print_column(this->array[i].last_name);
		PhoneBook::_print_column(this->array[i].nickname);
		std::cout << std::endl;
	}
	std::cout << MSG_SEPARATOR << std::endl;
}

void	PhoneBook::search_contact(void)
{
	std::string	str;

	if (PhoneBook::nbr_of_contacts == 0)
	{
		std::cout << "There is no contact here yet, add some !" << std::endl;
		return ;
	}
	PhoneBook::_print_contacts();
	int	index;
	while (42)
	{
		std::cout << std::endl;
		std::cout << "Index of the contact you're looking for : ";
		if (!std::getline(std::cin, str))
			exit (-1);
		index = atoi(str.c_str());
		if (!PhoneBook::_string_is_num(str) || str.empty() || index < 0 || index > PhoneBook::nbr_of_contacts - 1)
			std::cout << "/!\\ Invalid index" << std::endl;
		else
			break ;
	}
	std::cout << "First name : " << this->array[index].first_name << std::endl;
	std::cout << "Last name : " << this->array[index].last_name << std::endl;
	std::cout << "Nickname : " << this->array[index].nickname << std::endl;
	std::cout << "Phone number : " << this->array[index].phone_number << std::endl;
	std::cout << "Darkest secret : " << this->array[index].darkest_secret << std::endl;
}

void	PhoneBook::add_contact(void)
{
	Contact instance;

	instance.create_contact();

	if (PhoneBook::nbr_of_contacts < 8)
		PhoneBook::nbr_of_contacts++;
	PhoneBook::_move_contacts();
	this->array[0] = instance;
}

int	main(void)
{
	std::string		str;
	PhoneBook	instance;

	instance.nbr_of_contacts = 0;
	while (1)
	{
		std::cout << "Entry : ";
		if (!std::getline(std::cin, str))
			return -1;
		if (str == "ADD")
		{
			std::cout << std::endl;
			instance.add_contact();
			std::cout << std::endl;
		}
		else if (str == "SEARCH")
		{
			std::cout << std::endl;
			instance.search_contact();
			std::cout << std::endl;
		}
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Wrong entry, choose between ADD, SEARCH and EXIT" << std::endl;
	}
	return 0;
}