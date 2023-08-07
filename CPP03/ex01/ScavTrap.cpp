/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/07 16:15:14 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("ScavTrap")
{
	std::cout << "ScavTrap default name constructor called" << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}
ScavTrap::ScavTrap( const std::string str) : ClapTrap(str)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
}
ScavTrap::~ScavTrap( void )
{
		std::cout << "ScavTrap destructor called" << std::endl;
}
ScavTrap::ScavTrap( const ScavTrap& other )
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}
void	ScavTrap::operator=( const ScavTrap& other)
{
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->HP <= 0 || this->EP <=0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl; 
	this->EP--;
}