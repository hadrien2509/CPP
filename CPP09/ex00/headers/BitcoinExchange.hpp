/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:10:57 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/14 18:38:09 by hgeissle         ###   ########.fr       */
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

		std::map<std::string, double> _database;

		static bool _isDateValid(std::string date);
		static bool _isDateFormatValid(std::string date);
		static bool _isRateValid(std::string rate);
		double _findClosestDateValue(std::string);
		
	public :
		BitcoinExchange(const std::string &);
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);
		~BitcoinExchange();

		int CalculatePrice(const std::string &);
};

#endif