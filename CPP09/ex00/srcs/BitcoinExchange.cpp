/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:26:28 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/05 19:57:45 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/BitcoinExchange.hpp"

void BitcoinExchange::stockDataInMap()
{
	std::ifstream	dataFile("data.csv");
	if (!dataFile.is_open())
		throw std::runtime_error("Failed to open file");

	std::string	line;
	if (getline(dataFile, line))
	{
		if (line != "data,exchange_rate")
			throw std::runtime_error("Incorrect ");
	}
	while (getline(dataFile, line))
	{
		
	}
}