/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:31:26 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 20:02:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RPN.hpp"

int main(int ac, char **av)
{
	RPN	test;

	if (ac != 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	test.reversePolishNation(av[1]);
	std::cout << test.answer.top() << std::endl;
}