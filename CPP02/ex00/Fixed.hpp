/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:47:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/01 18:51:39 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	
	int			val;
	static int	frac;

	public:

		Fixed( void );
		~Fixed( void );
		Fixed( Fixed& );
	
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		void 	operator=( Fixed& );
};

#endif