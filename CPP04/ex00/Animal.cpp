/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:07:37 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 12:41:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Unidentified animal";
}

Animal::Animal( const Animal& other )
{
	this->type = other.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

void	Animal::operator=( const Animal& other)
{
	this->type = other.type;
	std::cout << "Animal assignment operator called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "krkrkrkrkrkrkrkr" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}
