/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:51:42 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/27 18:05:27 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <string>

class Harl {
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	public :
	
		void	switch_it_off( std::string level );
};