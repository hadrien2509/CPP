/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:10:20 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/31 15:10:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/A.hpp"
#include "../headers/B.hpp"
#include "../headers/C.hpp"
#include <ctime>

Base::~Base() {}

Base * generate(void)
{
	Base *ptr;

	srand(time(0));
	int random_value = rand() % 3;

	switch (random_value)
	{
		case 0:
			std::cout << "generated A instance" << std::endl;
			ptr = new A;
			break ;
		case 1:
			std::cout << "generated B instance" << std::endl;
			ptr = new B;
			break ;
		case 2:
			std::cout << "generated C instance" << std::endl;
			ptr = new C;
			break ;
		default:
			ptr = NULL;
			break ;
	}
	return ptr;
}

void identify(Base* p)
{
	A *ptrA = dynamic_cast<A *>(p);
	if (ptrA)
		std::cout << "identify ptr : class A" << std::endl;
	B *ptrB = dynamic_cast<B *>(p);
	if (ptrB)
		std::cout << "identify ptr : class B" << std::endl;
	C *ptrC = dynamic_cast<C *>(p);
	if (ptrC)
		std::cout << "identify ptr : class C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &refA = dynamic_cast<A&>(p);
		(void)refA;
		std::cout << "identify ref : class A" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		B &refB = dynamic_cast<B&>(p);
		(void)refB;
		std::cout << "identify ref : class B" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		C &refC = dynamic_cast<C&>(p);
		(void)refC;
		std::cout << "identify ref : class C" << std::endl;
	}
	catch (std::bad_cast &bc) {}
}
