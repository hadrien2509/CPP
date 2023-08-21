/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 12:32:13 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	{
		FragTrap frag("Jack");

		frag.highFivesGuys();
		frag.takeDamage(99);
		frag.beRepaired(99);
		frag.highFivesGuys();
		frag.takeDamage(1);
		frag.takeDamage(99);

		frag.highFivesGuys();
		frag.beRepaired(1);
		frag.highFivesGuys();
		frag.takeDamage(10);
	}
	std::cout << std::endl;
	{
		FragTrap	frag("Chia Labeouf");

		for (int i = 0; i < 100; ++i)
			frag.attack("a random person");
		frag.beRepaired(5);
	}
	return (0);
}
