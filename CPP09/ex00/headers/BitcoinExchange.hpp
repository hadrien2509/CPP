/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:10:57 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/05 19:40:22 by hgeissle         ###   ########.fr       */
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
		
	public :
		void stockDataInMap();
};

#endif