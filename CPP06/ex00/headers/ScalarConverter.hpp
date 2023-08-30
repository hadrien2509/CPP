/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:01:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/29 18:02:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
	PSEUDO_FLOAT,
	PSEUDO_DOUBLE,
	INVALID
};

class ScalarConverter
{
	private:
		void convertPseudoFloat(std::string str);
		void convertPseudoDouble(std::string str);
		void convertChar(std::string str);
		void convertInt(std::string str);
		void convertFloat(std::string str);
		void convertDouble(std::string str);
		void displayChar(char c);
		void displayInt(int nb);
		void displayFloat(float nb);
		void displayDouble(double nb);
		e_type	getNumType(std::string str);

	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);
		~ScalarConverter();
		
		e_type	getType(std::string str);
		void convert(std::string str);
};

#endif