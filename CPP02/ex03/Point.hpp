/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:59:28 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/03 19:27:50 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point( void );
		~Point( void );
		Point( const float , const float );
		Point( const Point& );
		void	operator=( const Point& );
		Fixed getX( void ) const;
		Fixed getY( void ) const;
};

#endif