/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:49:04 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/15 16:22:46 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PmergeMe.hpp"

int main(int ac, char** av)
{
	try
	{
		PmergeMe	test(ac, av);
	
		test.sort();
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << test.getTimeVector() << " ms" << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque : " << test.getTimeDeque() << " ms" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}