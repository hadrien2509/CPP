/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:19:08 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 14:04:53 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
	return ;
}

Point::Point( const float a, const float b ) : x(a), y(b)
{
	return ;
}

Point::~Point( void )
{
	return ;
}

Point::Point( const Point& other) : x(other.x), y(other.y)
{
	return ;
}

void	Point::operator=( const Point& )
{
	return ;
}

Fixed	Point::getX( void ) const
{
	return (this->x);
}

Fixed	Point::getY( void ) const
{
	return (this->y);
}