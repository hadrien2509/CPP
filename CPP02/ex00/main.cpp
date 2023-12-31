/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:39:44 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 16:28:42 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	{
		Fixed a;
		Fixed b( a );
		Fixed c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
	}
	{
		std::cout << "\nSecond Test\n" << std::endl;
		Fixed	a;
		Fixed	b;

		a.setRawBits(10);
		b.setRawBits(1);

		std::cout << a.getRawBits() << std::endl;
		a = b;
		std::cout << a.getRawBits() << std::endl;
		
	}
	return 0;
}