/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:00:21 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/21 16:30:45 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{
	Zombie	*zom;

	zom = newZombie("Francis");
	zom->announce();
	zom->announce();
	zom->announce();
	randomChump("Barner");
	randomChump("Barner");
	delete(zom);
}