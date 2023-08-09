/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:46:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 17:22:07 by hgeissle         ###   ########.fr       */
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
	*this = old;
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
	return ((float)this->val / (1 << this->frac));
}

int Fixed::toInt( void ) const
{
	return (this->val >> this->frac);
}