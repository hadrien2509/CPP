/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:36:22 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/21 17:21:23 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(int ac, char **av)
{
	Zombie	*zom;
	int		N;
	
	if (ac != 2)
		N = 5;
	else
		N = atoi(av[1]);
	zom = zombieHorde(N, "Francis");
	for (int i = 0; i < N; ++i)
		zom[i].announce();
	delete[](zom);
}