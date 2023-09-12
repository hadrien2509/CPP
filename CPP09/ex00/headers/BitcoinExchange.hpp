/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:10:57 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 11:43:57 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <map>

class BitcoinExchange
{
	private :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		~BitcoinExchange();

		static std::map<std::string, float> _database;

		static bool _isDateValid(std::string date);
		static bool _isDateFormatValid(std::string date);
		static bool _isRateValid(std::string rate);

		static double _findClosestDateValue(std::string);
		
	public :
		static void storeDataInMap();
		static void CalculatePrice(const std::string &);
};

#endif