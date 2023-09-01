/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:01:56 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/01 18:59:45 by hgeissle         ###   ########.fr       */
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
		ScalarConverter();
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);
		~ScalarConverter();

		static void convertPseudoFloat(std::string str);
		static void convertPseudoDouble(std::string str);
		static void convertChar(std::string str);
		static void convertInt(std::string str);
		static void convertFloat(std::string str);
		static void convertDouble(std::string str);
		static void displayChar(char c);
		static void displayInt(int nb);
		static void displayFloat(float nb);
		static void displayDouble(double nb);
		static e_type	getNumType(std::string str);

	public:
		
		static e_type	getType(std::string str);
		static void convert(std::string str);
};

#endif