/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:49:04 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/13 15:26:03 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PmergeMe.hpp"

int main(int ac, char** av)
{
	try
	{
		PmergeMe	test(ac, av);
	
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}