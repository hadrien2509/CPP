/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:11:10 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/14 17:32:40 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

	public:
		ScavTrap( void );
		ScavTrap( std::string );
		~ScavTrap( void );
		ScavTrap( const ScavTrap& );
		void	operator=( const ScavTrap& );

		void	guardGate();
		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
};

#endif