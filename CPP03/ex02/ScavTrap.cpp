/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 22:11:06 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : name("ScavTrap"), HP(100), EP(50), AD(20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap( const std::string str) : name(str), HP(10), EP(10), AD(10)
{
	std::cout << "ScavTrap name assignment constructor called" << std::endl;
}
ScavTrap::~ScavTrap( void )
{
		std::cout << "ScavTrap estructor called" << std::endl;
}
ScavTrap::ScavTrap( const ScavTrap& other ) : name(other.name), HP(other.HP), EP(other.EP), AD(other.AD)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}
void	ScavTrap::operator=( const ScavTrap& other)
{
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}