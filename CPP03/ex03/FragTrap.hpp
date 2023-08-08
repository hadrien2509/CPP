/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 09:57:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/08 18:16:19 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap( void );
		FragTrap( std::string );
		~FragTrap( void );
		FragTrap( const FragTrap& );
		void	operator=( const FragTrap& );

		void	highFivesGuys(void);
		void	attack(const std::string& target);
};

#endif