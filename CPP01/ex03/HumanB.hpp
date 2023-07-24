/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:00:49 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 15:20:39 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

class HumanB {

	std::string	name;
	Weapon		*wp;

	public :

		HumanB( std::string a1);
		void setWeapon( Weapon& );
		void attack();
};