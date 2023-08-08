/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiDiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/07 17:15:22 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("DiamondTrap_clap_name"), ScavTrap("ScavTrap"), FragTrap("FragTrap")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "DiamondTrap";
}
DiamondTrap::DiamondTrap( const std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = str;
}
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	std::cout << this->FragTrap::HP << this->ScavTrap::EP << this->FragTrap::AD << std::endl;
	this->name = other.name;
	this->FragTrap::HP = other.FragTrap::HP;
	this->ScavTrap::EP = other.ScavTrap::EP;
	this->FragTrap::AD = other.FragTrap::AD;
}
void	DiamondTrap::operator=( const DiamondTrap& other)
{
	this->name = other.name;
	this->FragTrap::HP = other.FragTrap::HP;
	this->ScavTrap::EP = other.ScavTrap::EP;
	this->FragTrap::AD = other.FragTrap::AD;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->name << " and my ClapTrap::name is " << this->ClapTrap::name << std::endl;
}