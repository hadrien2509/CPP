/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:10:20 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/31 09:07:44 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Base.hpp"

Base::~Base() {}

Base * generate(void)
{
	srand(time(0));
	int random_value = rand() % 3;

	switch (random_value)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
}

void identify(Base* p)
{
	A *ptr = static_cast<A *>(p);
	if (ptr == p)
		std::cout << A << std::endl;
	ptr = static_cast<B *>(p);
	if (ptr == p)
		std::cout << B << std::endl;
	ptr = static_cast<C *>(p);
	if (ptr == p)
		std::cout << C << std::endl;
}

void identify(Base& p)
{
	A *ptr = static_cast<A *>(&p);
	if (ptr == &p)
		std::cout << A << std::endl;
	ptr = static_cast<B *>(&p);
	if (ptr == &p)
		std::cout << B << std::endl;
	ptr = static_cast<C *>(&p);
	if (ptr == &p)
		std::cout << C << std::endl;
}