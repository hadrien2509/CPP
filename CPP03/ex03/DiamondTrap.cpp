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

DiamondTrap::DiamondTrap( void ) : name("DiamondTrap")
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	ClapTrap::name = "DiamondTrap_clap_name";
}
DiamondTrap::DiamondTrap( const std::string str) : name(str)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	ClapTrap::name = str + "_clap_name";
}
DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap( const DiamondTrap& other )
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
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

void DiamondTrap::highFivesGuys(void)
{
	std::cout << "DiamondTrap high fives everyone" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	if (this->FragTrap::HP <= 0 || this->ScavTrap::EP <=0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->FragTrap::AD << " points of damage!" << std::endl; 
	this->ScavTrap::EP--;
}