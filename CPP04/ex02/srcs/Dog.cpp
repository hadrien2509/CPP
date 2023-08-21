/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:32:04 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 17:51:05 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Dog.hpp"

Dog::Dog( void )
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->setIdea(0, "I am a dog");
	for (int i = 1; i < 100; i++)
		this->brain->setIdea(i, "I'm a good boy");
}

Dog::Dog( const Dog& other )
{
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "Dog copy constructor called" << std::endl;
}

void	Dog::operator=( const Dog& other)
{
	this->type = other.type;
	this->brain = new Brain(*(other.brain));
	std::cout << "Dog assignment operator called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const
{
	std::cout << "BARK BARK BARK" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}