/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:26:28 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/10 14:18:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/BitcoinExchange.hpp"

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
	if (!this->_isDateFormatValid(date))
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
			if ((year % 4 == 0 || year % 100 == 0) && day > 28)
				return (false);
			if (day > 29)
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
			if (!this->_isDateValid(date))
				throw std::runtime_error(".csv file contains invalid date(s)");
			if (!this->_isRateValid(rate))
				throw std::runtime_error(".csv file contains invalid rate value(s)");
		rate_nb = std::strtod(rate.c_str(), NULL);
		if (rate_nb < 0)
			throw std::runtime_error(".csv file contains negative rate value(s)");
		_database[date] = rate_nb;
		std::cout << date << " " << rate_nb << std::endl;
		}
	}
}

double BitcoinExchange::_findClosestDateValue(std::string date)
{
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());

	if (this->_database[date])
		return this->_database[date];
	while (!this->_database[date])
	{
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
			throw std::runtime_error("no match found for some date(s) in the input file");
		if (day < 10 && month < 10)
			date = std::itoa(year) + "-0" + std::itoa(month) + "-0" + std::itoa(day);
		else if (day < 10 && month >= 10)
			date = std::itoa(year) + "-" + std::itoa(month) + "-0" + std::itoa(day);
		else if (day >= 10 && month < 10)
			date = std::itoa(year) + "-0" + std::itoa(month) + "-0" + std::itoa(day);
		else if (day >= 10 && month >= 10)
			date = std::itoa(year) + "-0" + std::itoa(month) + "-0" + std::itoa(day);

		std::cout << "date string :" << date << std::endl;
	}
	return this->_database[date];
}

void BitcoinExchange::CalculatePrice(const std::string& input)
{
	std::ifstream	dataFile(input);
	if (!dataFile.is_open())
		throw std::runtime_error("Failed to open input file");

	std::string	line, date, pipe, value;
	if (getline(dataFile, line))
	{
		if (line != "date,exchange_rate")
			throw std::runtime_error("input file is not well formated");
	}
	double res;
	while (getline(dataFile, line))
	{
		std::stringstream	ss(line);

		ss >> date;
		ss >> pipe;
		ss >> value;

		if (pipe != "|")
			throw std::runtime_error("input file is not well formated");
		if (!this->_isDateValid(date))
			throw std::runtime_error("input file contains invalid date(s)");
		if (!this->_isRateValid(value))
			throw std::runtime_error("input file contains invalid rate value(s)");
		res = this->_findClosestDateValue(date);
		res = res * value;
	}
}