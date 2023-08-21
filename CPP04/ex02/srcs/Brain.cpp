/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:08:12 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 17:37:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

void	Brain::operator=( const Brain &other )
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain::Brain( const Brain &other )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

void	Brain::getIdea( int index ) const
{
	std::cout << this->ideas[index] << std::endl;
}

void	Brain::setIdea( int index, std::string idea )
{
	this->ideas[index] = idea;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}