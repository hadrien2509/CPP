/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:57:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/16 13:57:11 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string );
		DiamondTrap( const DiamondTrap& );
		~DiamondTrap( void );
		void	operator=( const DiamondTrap& );

		void    whoAmI( void );
};

#endif