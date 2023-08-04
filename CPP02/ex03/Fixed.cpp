/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:46:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 14:15:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->val = 0;
}
Fixed::Fixed(int val)
{
	this->val = val << this->frac;
}
Fixed::Fixed(float val)
{
	std::string	tostring;

	this->val = roundf(val * (1 << this->frac));
}

Fixed::Fixed(const Fixed &old)
{
	this->val = old.val;
}

void	Fixed::operator=( const Fixed& old)
{
	this->val = old.val;
}

bool	Fixed::operator>( const Fixed& other )
{
	return (this->val > other.val);
}

bool	Fixed::operator<( const Fixed& other )
{
	return (this->val < other.val);
}

bool	Fixed::operator<=( const Fixed& other )
{
	return (this->val <= other.val);
}

bool	Fixed::operator>=( const Fixed& other )
{
	return (this->val >= other.val);
}

bool	Fixed::operator==( const Fixed& other )
{
	return (this->val == other.val);
}

bool	Fixed::operator!=( const Fixed& other )
{
	return (this->val != other.val);
}

Fixed	Fixed::operator+( const Fixed& other )
{
	Fixed	val(*this);

	val.setRawBits(this->val + other.val);
	return (val);
}

Fixed	Fixed::operator-( const Fixed& other )
{
	Fixed	val(*this);

	val.setRawBits(this->val - other.val);
	return (val);
}

Fixed	Fixed::operator*( const Fixed& other )
{
	Fixed val(*this);
	
	val.setRawBits((long)this->val * (long)other.val / (1 << this->frac));
	return (val);
}

Fixed	Fixed::operator/( const Fixed& other )
{
	Fixed val(*this);
	
	val.setRawBits((long)this->val * (1 << this->frac) / (long)other.val);
	return (val);
}

Fixed	Fixed::operator--( void )
{
	this->val--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp(*this);

	this->val--;
	return (tmp);
}
Fixed	Fixed::operator++( void )
{
	this->val++;
	return (*this);
}
Fixed	Fixed::operator++( int )
{
	Fixed	tmp(*this);

	this->val++;
	return (tmp);
}

Fixed&	Fixed::max( Fixed& a, Fixed& b)
{
	if (a.val >= b.val)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max( const Fixed& a, const Fixed& b)
{
	if (a.val >= b.val)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::min( Fixed& a, Fixed& b)
{
	if (a.val <= b.val)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min( const Fixed& a, const Fixed& b)
{
	if (a.val <= b.val)
		return (a);
	else
		return (b);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    return (out << value.toFloat());
}

Fixed::~Fixed(void)
{
	
}

int Fixed::getRawBits(void) const
{
	return (this->val);
}

void Fixed::setRawBits( int const raw )
{
	this->val = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->val / (1 << this->frac));
}

int Fixed::toInt( void ) const
{
	return (this->val >> this->frac);
}