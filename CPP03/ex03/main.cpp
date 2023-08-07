/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/07 16:16:10 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap frag("Jack");

	frag.takeDamage(4);
	frag.attack("mel-faqu");
	frag.beRepaired(3);
	frag.takeDamage(5);
	frag.takeDamage(2);
	frag.beRepaired(12);
	frag.beRepaired(10);
	frag.beRepaired(1);
	frag.takeDamage(10);
	return (0);
}
