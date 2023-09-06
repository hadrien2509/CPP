/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:26:28 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/06 04:19:12 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/BitcoinExchange.hpp"

bool 

bool BitcoinExchange::_isDateFormatValid(std::string date)
{
	if (date.size() != 10)
		return (false);
	if (data.substr(0, 4).find_first_not_of("0123456789") != std::string::npos)
		return (false);
	if (data.substr(5, 2).find_first_not_of("0123456789") != std::string::npos)
		return (false);
	if (data.substr(8, 2).find_first_not_of("0123456789") != std::string::npos)
		return (false);
	if (data.substr(4, 1) != "-" || data.substr(7, 1) != "-")
		return (false);

	return (true);
}

bool BitcoinExchange::_isDateValid(std::string date)
{
	if (!this->isDateFormatValid(date))
		return (false);

	int year = std::stoi(date.substr(0, 4));
	int month = std::stoi(date.substr(5, 2));
	int day = std::stoi(date.substr(8, 2));

	if (day < 1)
		return (false);
	switch (month)
	{
		case 1: case 3: case 5: case: 7 case 8: case 10: case 12:
			if (day > 31)
				return (false);
			break;
		case 4: case 6: case 9: case 11:
			if (day > 30)
				return (false);
			break;
		case 2:
			if ((year % 4 == 0 || year % 100 == 0) && day > 28)
				return (false);
			if (day > 29)
				return (false)
			break;
		default:
			return (false);
	}
	return (true);
}

bool BitcoinExchange::isRateValid(float rate)
{
	if (rate < 0)
		return (false);
	return (true);
}

void BitcoinExchange::storeDataInMap()
{
	std::ifstream	dataFile("data.csv");
	if (!dataFile.is_open())
		throw std::runtime_error("Failed to open file");

	std::string	line, date, rate;
	if (getline(dataFile, line))
	{
		if (line != "data,exchange_rate")
			throw std::runtime_error("Incorrect ");
	}
	while (getline(dataFile, line))
	{
		std::stringstream	ss(line);

		if (getline(ss, date, ',') && getline(s, rate))
		{
			if (!this->_isDateValid(date))
				throw std::runtime_error(".csv file contains invalid date(s)");
			if (!this->_isRateValid(rate))
				throw std::runtime_error(".csv file contains invalid rate value(s)");
			
		}
		
		this->_database[date] = std::stof(rate);
	}
}