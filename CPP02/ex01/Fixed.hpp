/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:47:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/31 19:06:06 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Fixed {
	
	int					val;
	int					frac = 8;

	public:

		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed& );
		void	operator=( const Fixed& );
		
		Fixed( int );
		Fixed( float );
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
};