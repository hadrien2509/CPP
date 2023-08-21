/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 13:15:00 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	{
		DiamondTrap frag("Jack");
		DiamondTrap	frag2("Nick");
		
		frag2 = frag;
		frag2.guardGate();
		frag2.highFivesGuys();
		frag2.whoAmI();
		frag2.highFivesGuys();
		frag.takeDamage(100);
		frag2 = frag;
		frag2.highFivesGuys();
	}
	std::cout << std::endl;
	{
		DiamondTrap frag("Chia Labeouf");

		for (int i = 0; i < 100; ++i)
			frag.attack("a random person");
		frag.beRepaired(5);
	}
	std::cout << std::endl;
	{
		DiamondTrap frag("Luke");

		for (int i = 0; i < 4; ++i)
			frag.takeDamage(25);
		frag.beRepaired(10);
	}
	std::cout << std::endl;
	{
		DiamondTrap frag("George");

		for (int i = 0; i < 3; ++i)
			frag.takeDamage(25);
		frag.beRepaired(75);
	}
}
