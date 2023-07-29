/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:47:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/29 19:24:23 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

class Fixed {
	
	int			val;
	static int	frac;

	public:

		Fixed( void );
		Fixed( Fixed& );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed& Fixed::operator=( const Fixed& );
		Fixed& Fixed::operator=( Fixed& );
}