/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:12:45 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/21 18:49:37 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {

	private:
		Brain		*brain;

	public:
		Dog( void );
		~Dog( void );
		Dog( const Dog& );
		void	operator=( const Dog& );

		void	makeSound( void ) const;
		Brain	*getBrain( void ) const;
};

#endif