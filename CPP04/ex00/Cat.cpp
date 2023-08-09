/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:32:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/08 20:32:01 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat& other )
{
	this->type = other.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::operator=( const Cat& other)
{
	this->type = other.type;
	std::cout << "Cat assignment operator called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound( void )
{
	std::cout << "Miaouw....meow...miaouw" << std::endl;
}