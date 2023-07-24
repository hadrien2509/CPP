/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 18:02:02 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/24 14:32:04 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon {

	std::string	type;

	public :
	
		Weapon( std::string );
		const std::string &getType(void);
		void 		setType(std::string name);

};