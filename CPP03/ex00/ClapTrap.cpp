/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:29:30 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/07 16:13:40 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("ClapTrap"), HP(10), EP(10), AD(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap( const std::string str) : name(str), HP(10), EP(10), AD(10)
{
	std::cout << "Constructor called" << std::endl;
}
ClapTrap::~ClapTrap( void )
{
		std::cout << "Destructor called" << std::endl;
}
ClapTrap::ClapTrap( const ClapTrap& other ) : name(other.name), HP(other.HP), EP(other.EP), AD(other.AD)
{
	std::cout << "Copy constructor called" << std::endl;
}
void	ClapTrap::operator=( const ClapTrap& other)
{
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->HP <= 0 || this->EP <=0)
		return ;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl; 
	this->EP--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP <= 0 || this->EP <=0)
		return ;
	std::cout << "ClapTrap " << this->name << " gets hurt and loose " << amount << " HP !" << std::endl;
	this->HP -= amount;
	if (this->HP <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is KO :(" << std::endl;
		this->HP = 0;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP <= 0 || this->EP <=0 || amount > 10)
		return ;
	if (this->HP == 10)
		std::cout << "ClapTrap " << this->name << "repairs itself but is already at max HP" << std::endl;
	std::cout << "ClapTrap " << this->name << " repairs itself for an amount of " << amount << " health points" << std::endl;
	this->HP += amount;
	this->EP--;
	if (this->HP > 10)
		this->HP = 10;
}