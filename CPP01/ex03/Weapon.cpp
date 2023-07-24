/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:05:20 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 15:24:33 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string arg)
{
	this->type = arg;
}

Weapon::Weapon(std::string arg) : type(arg)
{
	return ;
}