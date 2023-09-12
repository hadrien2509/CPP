/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:47:02 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/12 19:34:58 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN & src)
{
	(*this) = src;
}

RPN& RPN::operator=(const RPN &src)
{
	this->answer = src.answer;
	return (*this);
}

void RPN::_selectOperation(std::string arg)
{
	int	nb1, nb2, s;
	std::string operations = "+-*/";

	nb1 = this->answer.top();
	this->answer.pop();
	nb2 = this->answer.top();
	this->answer.pop();
	
	s = operations.find(arg[0]);
	switch (s)
	{
		case 0:
			this->answer.push(nb1 + nb2);
			break;
		case 1:
			this->answer.push(nb2 - nb1);
			break;
		case 2:
			this->answer.push(nb1 * nb2);
			break;
		case 3:
			if (nb1 == 0)
				this->answer.push(nb2);
			else	
				this->answer.push(nb2 / nb1);
			break;
		default:
			std::cerr << "Error" << std::endl;
			break;
	}
}

int RPN::reversePolishNation(std::string input)
{
	std::string arg;
	std::stringstream ss(input);
	while (ss >> arg)
	{
		if (arg.size() != 1)
		{
			std::cerr << "Error" << std::endl;
			return 1;
		}
		if (!isdigit(arg[0]))
		{
			if (this->answer.size() == 2)
			{
				this->_selectOperation(arg);
			}
			else
				std::cerr << "Error" << std::endl;
		}
		else
		{
			if (this->answer.size() < 2)
				this->answer.push(std::atoi(arg.c_str()));
			else
				std::cerr << "Error" << std::endl;
		}
	}
	return 0;
}
