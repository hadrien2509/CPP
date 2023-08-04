/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/04 14:59:29 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream &operator<<(std::ostream &out, Fixed const &value);

int	main(void)
{
	Point const	a(1, 1);
	Point const	b(3, 4);
	Point const	c(6, 1);
	
	Point	p(5, 3);
	std::cout << bsp(a, b, c, p) << std::endl;
	
	Point	q(3, 2);
	std::cout << bsp(a, b, c, q) << std::endl;

	Point	r(4, 3);
	std::cout << bsp(a, b, c, r) << std::endl;

	Point	s(2, 2);
	std::cout << bsp(a, b, c, s) << std::endl;

	Point	t(1, 1);
	std::cout << bsp(a, b, c, t) << std::endl;
	return (0);
}
