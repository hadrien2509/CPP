/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:32:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 12:42:27 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& other )
{
	this->type = other.type;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

void	WrongCat::operator=( const WrongCat& other)
{
	this->type = other.type;
	std::cout << "WrongCat assignment operator called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaouw....meow...miaouw" << std::endl;
}