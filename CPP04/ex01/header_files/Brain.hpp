/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:59:42 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 14:18:44 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

# include <string>
# include <iostream>
# include "Animal.hpp"

class Brain {
	
	private:
		std::string	ideas[100];

	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain& );
		void	operator=( const Brain& );

		std::string	getIdeas( void );
}; 

#endif // __BRAIN_H__