/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:32:04 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 11:57:16 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog& other )
{
	this->type = other.type;
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::operator=( const Dog& other)
{
	this->type = other.type;
	std::cout << "Dog assignment operator called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK BARK BARK" << std::endl;
}