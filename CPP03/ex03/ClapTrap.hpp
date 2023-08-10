/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:15:45 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 18:19:29 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	
	protected:
		std::string			name;
		int					HP;
		int					EP;
		int					AD;
		
	public:
		ClapTrap( void );
		ClapTrap( std::string );
		~ClapTrap( void );
		ClapTrap( const ClapTrap& );
		void	operator=( const ClapTrap& );

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};

#endif