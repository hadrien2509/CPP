/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 19:33:53 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("FragTrap")
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
}
FragTrap::FragTrap( const std::string str) : ClapTrap(str)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}
void	FragTrap::operator=( const FragTrap& other)
{
	this->name = other.name;
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void FragTrap::highFivesGuys(void)
{
	if (this->HP > 0)
		std::cout << "FragTrap high fives everyone" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->HP <= 0 || this->EP <=0)
		return ;
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl; 
	this->EP--;
	if (this->EP == 0)
		std::cout << "FragTrap" << this->name << " has no energy left" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->HP <= 0 || this->EP <=0 || amount > 100)
		return ;
	if (this->HP == 100)
		std::cout << "ClapTrap " << this->name << " repairs itself but is already at max HP" << std::endl;
	std::cout << "ClapTrap " << this->name << " repairs itself for an amount of " << amount << " HP" << std::endl;
	this->HP += amount;
	this->EP--;
	if (this->EP == 0)
		std::cout << "FragTrap" << this->name << " has no energy left" << std::endl;
	if (this->HP > 100)
		this->HP = 100;
}