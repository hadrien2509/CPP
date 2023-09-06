/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:10:57 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/06 03:53:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstrean>
# include <fstream>
# include <map>

class BitcoinExchange
{
	private :
		std::map<std::string, float> _database;

		bool _isDateValid(std::string date);
		bool _isDateFormatValid(std::string date);
		bool _isRateValid(float rate);
		
	public :
		void storeDataInMap();
};

#endif