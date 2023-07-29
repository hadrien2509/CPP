/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 17:46:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/29 19:24:57 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->val = 0;
}

Fixed::Fixed(Fixed &old)
{
	this->val = old.val;
}

Fixed& Fixed::operator=(Fixed& old)
{
	this->val = old.val;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	int	get_frac;

	get_frac = this->value;
	this->val >> this->frac;
}