/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:02:09 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/13 17:11:21 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::create_contact(void)
{
	std::cout << "First name: ";
	while (std::getline(std::cin, this->first_name))
    {
        if (!this->first_name.empty())
            break;
        std::cout << "Invalid input. Please enter a non-empty first name: ";
    }

    std::cout << "Last name: ";
    while (std::getline(std::cin, this->last_name))
    {
        if (!this->last_name.empty())
            break;
        std::cout << "Invalid input. Please enter a non-empty last name: ";
    }

    std::cout << "Nickname: ";
    while (std::getline(std::cin, this->nickname))
    {
        if (!this->nickname.empty())
            break;
        std::cout << "Invalid input. Please enter a non-empty nickname: ";
    }

    std::cout << "Phone number: ";
    while (std::getline(std::cin, this->phone_number))
    {
        if (!this->phone_number.empty())
            break;
        std::cout << "Invalid input. Please enter a non-empty phone number: ";
    }

    std::cout << "Darkest secret: ";
    while (std::getline(std::cin, this->darkest_secret))
    {
        if (!this->darkest_secret.empty())
            break;
        std::cout << "Invalid input. Please enter a non-empty darkest secret: ";
    }
}