/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:58:54 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/05 16:30:22 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"

Span::Span(unsigned int n) : _N(n) {}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_N = src._N;
		std::copy(src._array.begin(), src._array.end(), this->_array.begin());		
	}
	return (*this);
}

Span::Span(Span const& src)
{
	(*this) = src;
}

Span::~Span() {}

void	Span::addNumber(int n)
{
	if (this->_array.size() >= this->_N)
		throw Span::FullArrayException();
	this->_array.push_back(n);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_array.size() + std::distance(begin, end) > this->_N)
		throw Span::FullArrayException();
	this->_array.insert(this->_array.end(), begin, end);
}

unsigned int Span::shortestSpan()
{
	std::vector<int> sorted;
	
	if (this->_array.size() < 2)
		throw Span::NotEnoughNumbersException();
	sorted = this->_array;
	std::sort(sorted.begin(), sorted.end());
	long min = LONG_MAX;
	for (unsigned int i = 0; i < sorted.size() - 1; i++)
	{
		if (static_cast<long>(sorted[i + 1]) - static_cast<long>(sorted[i]) < min)
			min = static_cast<long>(sorted[i + 1]) - static_cast<long>(sorted[i]);
	}
	return (min);
}

unsigned int Span::longestSpan()
{
	if (this->_array.size() < 2)
		throw Span::NotEnoughNumbersException();
	std::vector<int>::iterator min = std::min_element(this->_array.begin(), this->_array.end());
	std::vector<int>::iterator max = std::max_element(this->_array.begin(), this->_array.end());
	return (*max - *min);
}

void Span::printArray()
{
	std::vector<int>::iterator it = this->_array.begin();
	std::vector<int>::iterator ite = this->_array.end();

	std::cout << "Array: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}

const char* Span::FullArrayException::what() const throw()
{
	return ("Array is full");
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers in array");
}

