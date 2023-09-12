/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:26:28 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 15:29:17 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::_database;

bool BitcoinExchange::_isDateFormatValid(std::string date)
{
	if (date.size() != 10)
		return (false);
	if (date.substr(0, 4).find_first_not_of("0123456789") != std::string::npos)
		return (false);
	if (date.substr(5, 2).find_first_not_of("0123456789") != std::string::npos)
		return (false);
	if (date.substr(8, 2).find_first_not_of("0123456789") != std::string::npos)
		return (false);
	if (date.substr(4, 1) != "-" || date.substr(7, 1) != "-")
		return (false);

	return (true);
}

bool BitcoinExchange::_isDateValid(std::string date)
{
	if (!BitcoinExchange::_isDateFormatValid(date))
		return (false);

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (day < 1 || year < 2009)
		return (false);
	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (day > 31)
				return (false);
			break;
		case 4: case 6: case 9: case 11:
			if (day > 30)
				return (false);
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 == 0 && year % 400 != 0) && day > 29)
				return (false);
			if (day > 28)
				return (false);
			break;
		default:
			return (false);
	}
	return (true);
}

bool BitcoinExchange::_isRateValid(std::string rate)
{
	size_t	dot;

	if (rate.size() == 0)
		return false;
	dot = rate.find_first_not_of("0123456789");
	if (dot == std::string::npos)
		return true;
	if (rate[dot] != '.')
		return false;
	if (rate.substr(dot + 1, rate.size() - dot).find_first_not_of("0123456789") != std::string::npos)
		return false;
	return (true);
}

void BitcoinExchange::storeDataInMap()
{
	std::ifstream	dataFile("data.csv");
	if (!dataFile.is_open())
		throw std::runtime_error("Failed to open .csv file");

	std::string	line, date, rate;
	if (getline(dataFile, line))
	{
		if (line != "date,exchange_rate")
			throw std::runtime_error(".csv file is not well formated");
	}
	double rate_nb;
	while (getline(dataFile, line))
	{
		std::stringstream	ss(line);

		if (getline(ss, date, ',') && getline(ss, rate))
		{
			if (!BitcoinExchange::_isDateValid(date))
				throw std::runtime_error(".csv file contains invalid date(s)");
			if (!BitcoinExchange::_isRateValid(rate))
				throw std::runtime_error(".csv file contains invalid rate value(s)");
		rate_nb = std::strtod(rate.c_str(), NULL);
		if (rate_nb < 0)
			throw std::runtime_error(".csv file contains negative rate value(s)");
		BitcoinExchange::_database[date] = rate_nb;
		}
	}
}

double BitcoinExchange::_findClosestDateValue(std::string date)
{
	std::stringstream ss;
	
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (BitcoinExchange::_database[date])
		return BitcoinExchange::_database[date];
	while (!BitcoinExchange::_database[date])
	{
		ss.str("");
		if (day == 0)
		{
			day = 31;
			month--;
		}
		if (month == 0)
		{
			month = 12;
			year--;
		}
		if (year == 2008)
		{
			std::cerr << "Error: no match found for some date(s) in the input file" << std::endl;
			return (-1);
		}
		if (day < 10 && month < 10)
		{
			ss << year << "-0" << month << "-0" << day;
		}
		else if (day < 10 && month >= 10)
		{
			ss << year << "-" << month << "-0" << day;
		}
		else if (day >= 10 && month < 10)
		{
			ss << year << "-0" << month << "-" << day;
		}
		else if (day >= 10 && month >= 10)
		{
			ss << year << "-" << month << "-" << day;
		}
		date = ss.str();
		day--;
	}
	return BitcoinExchange::_database[date];
}

void BitcoinExchange::CalculatePrice(const std::string& input)
{
	std::ifstream	dataFile(input);
	if (!dataFile.is_open())
		std::cerr << "Error : could open input file" << std::endl;

	std::string	line, date, pipe, value;
	if (getline(dataFile, line))
	{
		if (line != "date | value")
			std::cerr << "Error: file is not well formated" << std::endl;
	}
	double res;
	while (getline(dataFile, line))
	{
		std::stringstream	ss(line);
			
		if (!(ss >> date) || !BitcoinExchange::_isDateValid(date))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			continue;
		}
		if (!(ss >> pipe) || pipe != "|")
		{
			std::cerr << "Error: file is not well formated" << std::endl;
			continue;
		}
		if (!(ss >> value) || !BitcoinExchange::_isRateValid(value))
		{
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		if (strtod(value.c_str(), NULL) > 1000)
		{
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}
		res = BitcoinExchange::_findClosestDateValue(date);
		if (res == -1)
			continue;
		res = res * std::strtod(value.c_str(), NULL);
		std::cout << date << " => " << value << " = " << res << std::endl;
	}
}