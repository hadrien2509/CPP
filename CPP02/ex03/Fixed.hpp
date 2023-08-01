/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:47:00 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/01 18:54:53 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
	
	int					val;
	static int const	frac = 8;

	public:

		Fixed( void );
		~Fixed( void );
		Fixed( const Fixed& );
		void	operator=( const Fixed& );
		bool	operator>( const Fixed& );
		bool	operator<( const Fixed& );
		bool	operator>=( const Fixed& );
		bool	operator<=( const Fixed& );
		bool	operator==( const Fixed& );
		bool	operator!=( const Fixed& );
		int		operator+( const Fixed& );
		int		operator-( const Fixed& );
		int		operator*( const Fixed& );
		int		operator/( const Fixed& );
		void	operator--( void );
		void	operator--( int );
		void	operator++( void );
		void	operator++( int );
		
		Fixed( int );
		Fixed( float );
		static Fixed&	min( Fixed&, Fixed& );
		static Fixed&	min( const Fixed&, const Fixed& );
		static Fixed&	max( Fixed&, Fixed& );
		static Fixed&	max( const Fixed&, const Fixed& );
		int 			getRawBits( void ) const;
		void 			setRawBits( int const raw );
		float 			toFloat( void ) const;
		int 			toInt( void ) const;
};

#endif