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

DiamondTrap::DiamondTrap( void ) : ClapTrap( "DiamondTrap_clap_name" ), ScavTrap( "DiamondTrap" ), FragTrap( "DiamondTrap" )
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->name = "DiamondTrap";
	this->HP = 100;
	this->EP = 50;
	this->AD = 30;
}

DiamondTrap::DiamondTrap( const std::string str) : ClapTrap( str + "_clap_name" ), ScavTrap( str ), FragTrap( str )
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->name = str;
	this->HP = 100;
	this->EP = 50;
	this->AD = 30;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void	DiamondTrap::operator=( const DiamondTrap& other)
{
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->name << " and my ClapTrap::name is " << ClapTrap::name << std::endl;
}
