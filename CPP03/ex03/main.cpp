/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/08 18:47:36 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap frag("Jack");

	frag.takeDamage(4);
	frag.attack("mel-faqu");
	frag.beRepaired(3);
	frag.takeDamage(5);
	frag.takeDamage(2);
	frag.beRepaired(12);
	frag.beRepaired(10);
	frag.beRepaired(1);
	frag.takeDamage(10);
	frag.whoAmI();
	return (0);
}
