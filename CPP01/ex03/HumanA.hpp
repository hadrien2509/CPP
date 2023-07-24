/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:00:53 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 15:37:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
	
	std::string	name;
	Weapon		*wp;

	public :

		HumanA( std::string a1, Weapon &a2 );
		void attack( void );
};