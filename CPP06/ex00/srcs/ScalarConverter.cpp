/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:06:24 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/30 19:31:52 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
	(void)src;
	return (*this);
}

void	ScalarConverter::displayChar(char c)
{
	std::cout << "char: ";
	if (std::isprint(c)) 
		std::cout << "'" << c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	ScalarConverter::displayInt(int nb)
{
	std::cout << "int: ";
	std::cout << nb << std::endl;
}

void	ScalarConverter::displayFloat(float nb)
{
	std::cout << "float: ";
	if (nb == static_cast<int>(nb))
		std::cout << nb << ".0f" << std::endl;
	else
		 std::cout << nb << "f" << std::endl;
}

void	ScalarConverter::displayDouble(double nb)
{
	std::cout << "double: ";
	if (nb == static_cast<int>(nb))
		std::cout << nb << ".0" << std::endl;
	else
		 std::cout << nb << std::endl;
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convertPseudoFloat(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << std::endl;
	std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
}

void	ScalarConverter::convertPseudoDouble(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << str << 'f' << std::endl;
	std::cout << "double: " << str << std::endl;
}

void	ScalarConverter::convertChar(std::string str)
{
	char c = str[0];

	displayChar(c);
	displayInt(static_cast<int>(c));
	displayFloat(static_cast<float>(c));
	displayDouble(static_cast<double>(c));
}

void	ScalarConverter::convertInt(std::string str)
{
	long num = strtol(str.c_str(), NULL, 10);
	if (errno == ERANGE || num > INT_MAX || num < INT_MIN)
	{
		std::cout << "Invalid number: int overflow" << std::endl;
		return ;
	}
	int	numint = static_cast<int>(num);

	displayChar(static_cast<char>(numint));
	displayInt(numint);
	displayFloat(static_cast<float>(numint));
	displayDouble(static_cast<double>(numint));
}

void	ScalarConverter::convertFloat(std::string str)
{
	float nb = std::strtof(str.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "Invalid number: float overflow" << std::endl;
		return ;
	}
	displayChar(static_cast<char>(nb));
	displayInt(static_cast<int>(nb));
	displayFloat(nb);
	displayDouble(static_cast<double>(nb));
}

void	ScalarConverter::convertDouble(std::string str)
{
	double nb = std::strtod(str.c_str(), NULL);
	if (errno == ERANGE)
	{
		std::cout << "Invalid number: double overflow" << std::endl;
		return ;
	}
	displayChar(static_cast<char>(nb));
	displayInt(static_cast<int>(nb));
	displayFloat(static_cast<float>(nb));
	displayDouble(nb);
}

void	ScalarConverter::convert(std::string str)
{
	e_type	type = getType(str);

	switch (type)
	{
		case CHAR:
			convertChar(str);
			break ;
		case PSEUDO_FLOAT:
			convertPseudoFloat(str);
			break ;
		case PSEUDO_DOUBLE:
			convertPseudoDouble(str);
			break ;
		case INT:
			convertInt(str);
			break ;
		case FLOAT:
			convertFloat(str);
			break ;
		case DOUBLE:
			convertDouble(str);
			break ;
		default:
			std::cout << "Invalid input" << std::endl;
			break ;
	}
}

e_type	ScalarConverter::getNumType(std::string str)
{
	int	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.' && dot == 0)
				dot = 1;
			else if (str[i] == 'f' && dot == 1 && str[i + 1] == 0 && isdigit(str[i - 1]))
				return FLOAT;
			else
				return INVALID;
		}
		i++;
	}
	if (dot == 1)
		return DOUBLE;
	return INT;
}

e_type	ScalarConverter::getType(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return CHAR;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return PSEUDO_FLOAT;
	if (str == "-inf" || str == "+inf" || str == "nan")
		return PSEUDO_DOUBLE;
	return (getNumType(str));
}
