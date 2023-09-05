/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:33:16 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/05 16:00:40 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"

int main()
{
	try {
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.printArray();

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
	Span sp = Span(5);
	std::vector<int> numbersToAdd;
	
	numbersToAdd.push_back(0);
	numbersToAdd.push_back(INT_MAX);
	numbersToAdd.push_back(INT_MIN);

	sp.addNumbers(numbersToAdd.begin(), numbersToAdd.end());
	sp.printArray();

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "UINT_MAX = " << UINT_MAX << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}