/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:46:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/31 19:11:19 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
	this->frac = 8;
}
Fixed::Fixed(int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->val = val;
	this->frac = 0;
}
Fixed::Fixed(float val)
{
	float	frac_part;
	
	std::cout << "Float constructor called" << std::endl;
	this->val = val;
	frac_part = val - floor(val);
	this->frac = (frac_part * 1000) 
	this->val += frac_part;
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
	return ((float)this->val / (pow(2, (this->val / 2))));
}

int Fixed::toInt( void ) const
{
	return ((int)this->val);
}