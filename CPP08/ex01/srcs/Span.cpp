/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:58:54 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/04 15:44:27 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Span.hpp"

Span::Span(unsigned int n) : _N(n) {}

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		this->_N = src._N;
		this->_array = std::vector<int>(this->_N);
		this->_size = src._size;
		std::copy(src._array.begin(), src._array.end(), this->_array.begin());		
	}
	return (*this);
}

Span::Span(Span const& src)
{
	(*this) = src;
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (this->_size >= this->_N)
		throw Span::FullArrayException();
	this->_array[this->_size] = n;
	this->_size++;
}

unsigned int Span::shortestSpan()
{
	if (this->_size < 2)
		throw Span::NotEnoughNumbersException();
	std::sort(this->_array.begin(), this->_array.end());
	unsigned int min = UINT_MAX;
	for (unsigned int i = 0; i < this->_size - 1; i++)
	{
		if (this->_array[i + 1] - this->_array[i] < min)
			min = this->_array[i + 1] - this->_array[i];
	}
}

unsigned int Span::longestSpan()
{
	if (this->_size < 2)
		throw Span::NotEnoughNumbersException();
	std::vector<int>::iterator min = std::min_element(this->_array.begin(), this->_array.end());
	std::vector<int>::iterator max = std::max_element(this->_array.begin(), this->_array.end());
	return (*max - *min);
}

const char* Span::FullArrayException::what() const throw()
{
	return ("Array is full");
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not enough numbers in array");
}

