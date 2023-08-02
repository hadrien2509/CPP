/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:59:28 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/02 16:30:01 by hgeissle         ###   ########.fr       */
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
		Point( float , float );
		Point( const Point& );
		void	operator=( const Point& );
};

#endif