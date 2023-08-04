/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:29:30 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 15:56:59 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("ClapTrap"), HP(10), EP(10), AD(0)
{
	return ;
}
ClapTrap::ClapTrap( const std::string str) : name(str), HP(10), EP(10), AD(10)
{
	return ;
}
ClapTrap::~ClapTrap( void )
{
	return ;
}
ClapTrap::ClapTrap( const ClapTrap& other ) : name(other.name), HP(other.HP), EP(other.EP), AD(other.AD)
{
	return ;
}
void	ClapTrap::operator=( const ClapTrap& other)
{
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl; 
}
void ClapTrap::takeDamage(unsigned int amount)
{
	return;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	return;
}