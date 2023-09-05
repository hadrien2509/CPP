/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:59:34 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/05 15:31:04 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/easyfind.hpp"

int main(void)
{
	std::vector<int>	v;
	std::list<int>		l;
	std::deque<int>		d;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(25);

	l.push_back(-1);
	l.push_back(-2);
	l.push_back(-3);
	l.push_back(-4);
	l.push_back(-5);
	l.push_back(-25);

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_back(5);
	d.push_back(25);

	try {
	std::cout << *(easyfind(v, 1)) << std::endl;
	std::cout << *(easyfind(v, 2)) << std::endl;
	std::cout << *(easyfind(v, 3)) << std::endl;
	std::cout << *(easyfind(v, 4)) << std::endl;
	std::cout << *(easyfind(v, 5)) << std::endl;
	std::cout << *(easyfind(v, 25)) << std::endl;
	std::cout << *(easyfind(v, -1)) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
	std::cout << *(easyfind(l, -1)) << std::endl;
	std::cout << *(easyfind(l, -2)) << std::endl;
	std::cout << *(easyfind(l, -3)) << std::endl;
	std::cout << *(easyfind(l, -4)) << std::endl;
	std::cout << *(easyfind(l, -5)) << std::endl;
	std::cout << *(easyfind(l, -25)) << std::endl;
	std::cout << *(easyfind(l, 1)) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
	std::cout << *(easyfind(d, 1)) << std::endl;
	std::cout << *(easyfind(d, 2)) << std::endl;
	std::cout << *(easyfind(d, 3)) << std::endl;
	std::cout << *(easyfind(d, 4)) << std::endl;
	std::cout << *(easyfind(d, 5)) << std::endl;
	std::cout << *(easyfind(d, 25)) << std::endl;
	std::cout << *(easyfind(d, -1)) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}