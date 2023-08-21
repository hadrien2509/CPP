/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:07:37 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 18:51:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/AAnimal.hpp"

AAnimal::AAnimal( void )
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Unidentified animal";
}

AAnimal::AAnimal( const AAnimal& other )
{
	this->type = other.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

void	AAnimal::operator=( const AAnimal& other)
{
	this->type = other.type;
	std::cout << "Animal assignment operator called" << std::endl;
}

AAnimal::~AAnimal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

void	AAnimal::makeSound( void ) const
{
	std::cout << "krkrkrkrkrkrkrkr" << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return (this->type);
}
