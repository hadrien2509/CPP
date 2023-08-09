/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/09 18:51:43 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, Fixed const &value);

int	main(void)
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}
	{
		Fixed	a(30);
		Fixed	b(15);
		Fixed	c(30.00f);
		Fixed	zero(0);
		Fixed	negative(-40);
		Fixed	res;

		std::cout << "\nPersonal tests :\nWith a = 30 and b = 15 and c == 30.00f\n" << std::endl;
		res = a + b;
		std::cout << "a + b :\n" << res << std::endl;
		res = a - b;
		std::cout << "a - b :\n" << res << std::endl;
		res = b - a;
		std::cout << "b - a :\n" << res << std::endl;
		res = a / b;
		std::cout << "a / b :\n" << res << std::endl;
		res = b / a;
		std::cout << "b / a :\n" << res << std::endl;
		res = a / zero;
		std::cout << "a / zero :\n" << res << std::endl;
		res = a * b;
		std::cout << "a * b :\n" << res << std::endl;
		std::cout << "a < b ?\n" << (a < b) << std::endl;
		std::cout << "a > b ?\n" << (a > b) << std::endl;
		std::cout << "a < negative ?\n" << (a < negative) << std::endl;
		std::cout << "c > a ?\n" << (c > a) << std::endl;
		std::cout << "c >= a ?\n" << (c >= a) << std::endl;
		std::cout << "a != b ?\n" << (a != b) << std::endl;
		std::cout << "a != c ?\n" << (a != b) << std::endl;
		std::cout << "a == b ?\n" << (a == b) << std::endl;
	}
	return (0);
}
