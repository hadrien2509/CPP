/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:12:45 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 18:45:26 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <array>
#include <iostream>
#include "Brain.hpp"

class AAnimal {

	protected:
		std::string	type;

	public:
		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal( const AAnimal& );
		void	operator=( const AAnimal& );

		virtual void	makeSound( void ) const;
		std::string	getType( void ) const;
};

#endif