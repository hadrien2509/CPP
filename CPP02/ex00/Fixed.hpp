/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:47:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 16:31:52 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	
	int					val;
	static const int	frac = 8;

	public:

		Fixed( void );
		~Fixed( void );
		Fixed( Fixed& );
		void 	operator=( Fixed& );
	
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
};

#endif