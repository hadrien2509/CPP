/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:02 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 15:09:21 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream &operator<<(std::ostream &out, Fixed const &value);

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	num;
	Fixed	denom;
	Fixed	frac;

	Fixed	a1 = a.getX();
	Fixed	a2 = a.getY();
	Fixed	b1 = b.getX();
	Fixed	b2 = b.getY();
	Fixed	c1 = c.getX();
	Fixed	c2 = c.getY();
	Fixed	p1 = point.getX();
	Fixed	p2 = point.getY();

	num = ((b2 - c2) * (p1 - b1) - (p2 - b2) * (b1 - c1));
	denom = ((p1 - a1) * (b2 - c2) - (p2 - a2) * (b1 - c1));
	if (denom == 0)
		return (false);
	frac = num / denom;
	if (frac.toInt() == 0)
		return false;

	num = ((a2 - b2) * (p1 - a1) - (p2 - a2) * (a1 - b1));
	denom = ((p1 - c1) * (a2 - b2) - (p2 - c2) * (a1 - b1));
	if (denom == 0)
		return (false);
	frac = num / denom;
	if (frac.toInt() == 0)
		return false;

	num = ((c2 - a2) * (p1 - c1) - (p2 - c2) * (c1 - a1));
	denom = ((p1 - b1) * (c2 - a2) - (p2 - b2) * (c1 - a1));
	if (denom == 0)
		return (false);
	frac = num / denom;
	if (frac.toInt() == 0)
		return false;

	return true;
}