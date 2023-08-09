/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:07:37 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 12:41:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "Unidentified WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	this->type = other.type;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

void	WrongAnimal::operator=( const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << "WrongAnimal assignment operator called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "krkrkrkrkrkrkrkr" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}
