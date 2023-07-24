/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:00:31 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/20 17:58:05 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {

	 
private:
	
	std::string	name;
	
public:
	
	~Zombie(void);
	
	void		setName( std::string );
	void		announce( void );
};