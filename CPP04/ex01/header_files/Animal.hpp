/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:12:45 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 14:26:40 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <array>
#include <iostream>
#include "Brain.hpp"

class Animal {

	protected:
		std::string	type;

	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( const Animal& );
		void	operator=( const Animal& );

		virtual void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif