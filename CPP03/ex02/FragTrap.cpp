/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 22:11:06 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : name("FragTrap"), HP(100), EP(50), AD(20)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap( const std::string str) : name(str), HP(10), EP(10), AD(10)
{
	std::cout << "FragTrap name assignment constructor called" << std::endl;
}
FragTrap::~FragTrap( void )
{
		std::cout << "FragTrap estructor called" << std::endl;
}
FragTrap::FragTrap( const FragTrap& other ) : name(other.name), HP(other.HP), EP(other.EP), AD(other.AD)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}
void	FragTrap::operator=( const FragTrap& other)
{
	this->HP = other.HP;
	this->EP = other.EP;
	this->AD = other.AD;
}

void highFivesGuys(void)
{
	std::cout << "FragTrap high fives everyone" << std::endl;
}