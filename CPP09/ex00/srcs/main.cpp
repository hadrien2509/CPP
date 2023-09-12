/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:10:24 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 15:17:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}	
	BitcoinExchange::storeDataInMap();
	BitcoinExchange::CalculatePrice(av[1]);
	return (0);
}