/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:57:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 18:18:33 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string );
		~FragTrap( void );
		FragTrap( const FragTrap& );
		void	operator=( const FragTrap& );

		void	highFivesGuys(void);
		void	attack(const std::string& target);
		void	beRepaired(unsigned int amount);
};

#endif