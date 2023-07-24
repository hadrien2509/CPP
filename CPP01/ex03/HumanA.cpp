/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:56:23 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 15:40:06 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string a1, Weapon &a2 ) : name(a1), wp(&a2)
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with " << this->wp->getType() << " !" << std::endl;
}