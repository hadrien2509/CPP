/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/07 16:22:14 by hgeissle         ###   ########.fr       */
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
FragTrap::FragTrap( const FragTrap& other ) : FragTrap()
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
	std::cout << "FragTrap high fives everyone" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->HP <= 0 || this->EP <=0)
		return ;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl; 
	this->EP--;
}