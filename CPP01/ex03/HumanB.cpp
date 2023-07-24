/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:56:26 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 15:39:35 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string a1) : name(a1)
{
	this->wp = 0;
	return ;
}

void HumanB::setWeapon(Weapon &arg)
{
	this->wp= &arg;
}

void HumanB::attack(void)
{
	if (!this->wp)
		std::cout << this->name << " attacks with his fists !" << std::endl;
	else
		std::cout << this->name << " attacks with " << this->wp->getType() << " !" << std::endl;
}
