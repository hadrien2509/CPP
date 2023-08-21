/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:32:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 17:50:57 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Cat.hpp"

Cat::Cat( void )
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	this->brain->setIdea(0, "I am a cat");
	for (size_t i = 1; i < 100; i++)
		this->brain->setIdea(i, "Miny miny miny moe");
}

Cat::Cat( const Cat& other )
{
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

void	Cat::operator=( const Cat& other)
{
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "Cat assignment operator called" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaouw....meow...miaouw" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}