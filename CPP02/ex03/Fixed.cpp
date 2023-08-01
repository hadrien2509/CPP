/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:46:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/01 18:25:50 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}
Fixed::Fixed(int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->val = val << this->frac;
}
Fixed::Fixed(float val)
{
	std::string	tostring;

	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(val * (1 << this->frac));
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = old.val;
}

void	Fixed::operator=( const Fixed& old)
{
	std::cout << "Copy assignment operator called" << std::endl;
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

int	Fixed::operator+( const Fixed& other )
{
	return (this->val + other.val);
}

int	Fixed::operator-( const Fixed& other )
{
	return (this->val - other.val);
}

int	Fixed::operator*( const Fixed& other )
{
	return (this->val * other.val);
}

int	Fixed::operator/( const Fixed& other )
{
	return (this->val / other.val);
}

void	Fixed::operator--( void )
{
	this->val--;
}

void	Fixed::operator--( int )
{
	this->val--;
}
void	Fixed::operator++( void )
{
	this->val++;
}
void	Fixed::operator++( int )
{
	this->val++;
}

Fixed&	Fixed::max( Fixed& a, Fixed& b)
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

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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