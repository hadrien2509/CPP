/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:49:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/18 20:30:33 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PmergeMe.hpp"

/* ************************************************************************** */
/*                               Canonical form                               */
/* ************************************************************************** */

PmergeMe::PmergeMe(int ac, char **av) : _alone(0)
{
	if (ac < 3)
		throw std::runtime_error("Error");
	int number;
	for (int i = 1; i < ac; i++)
	{
		std::istringstream iss(av[i]);
		iss >> number;
		if (iss.fail())
			throw (std::runtime_error("Error"));
		if (number <= 0)
			throw (std::runtime_error("Error"));
		this->_vector.push_back(number);
		this->_deque.push_back(number);
	}
}

PmergeMe& PmergeMe::operator=(const PmergeMe & src)
{
	this->_vector = src._vector;
	this->_deque = src._deque;
	this->_timeDeque = src._timeVector;
	this->_timeVector = src._timeVector;
	return (*this);
}

PmergeMe::PmergeMe(const PmergeMe & src) : _alone(0)
{
	(*this) = src;
}

PmergeMe::~PmergeMe() {}

/* ************************************************************************** */
/*                          Private Member functions                          */
/* ************************************************************************** */

void PmergeMe::_mergeDeque()
{
	for (size_t i = 0; i < this->_deque.size(); i++)			// Creating pairs
	{
		if (i % 2)
		{
			if (this->_deque[i - 1] <= this->_deque[i])
				this->_pairs.push_back(std::make_pair(this->_deque[i - 1], this->_deque[i]));
			else if (this->_deque[i - 1] > this->_deque[i])
				this->_pairs.push_back(std::make_pair(this->_deque[i], this->_deque[i - 1]));
		}
		else if (i == this->_deque.size() - 1)
		{
			this->_alone = this->_deque[i];
		}
	}
	std::sort(this->_pairs.begin(), this->_pairs.end());		// Sorting pairs relative to lowest value of each pair
	this->_deque.clear();										// Clear deque
    for (size_t i = 0; i < this->_pairs.size(); i++)			// Put lowest value of each pair in deque
	{
		this->_deque.push_back(this->_pairs[i].first);
		if (i == this->_pairs.size() - 1)
			this->_deque.push_back(this->_pairs[i].second);
    }
}

void PmergeMe::_mergeVector()
{
	for (size_t i = 0; i < this->_vector.size(); i++)			// Creating pairs
	{
		if (i % 2)
		{
			if (this->_vector[i - 1] <= this->_vector[i])
				this->_pairs.push_back(std::make_pair(this->_vector[i - 1], this->_vector[i]));
			else if (this->_vector[i - 1] > this->_vector[i])
				this->_pairs.push_back(std::make_pair(this->_vector[i], this->_vector[i - 1]));
		}
		else if (i == this->_vector.size() - 1)
		{
			this->_alone = this->_vector[i];
		}
	}
	std::sort(this->_pairs.begin(), this->_pairs.end());		// Sorting pairs relative to lowest value of each pair
	this->_vector.clear();										// Clear vector
    for (size_t i = 0; i < this->_pairs.size(); i++)			// Put lowest value of each pair in vector
	{
		this->_vector.push_back(this->_pairs[i].first);
		if (i == this->_pairs.size() - 1)
			this->_vector.push_back(this->_pairs[i].second);
    }
}

void PmergeMe::_binarySearchInsertion(std::vector<int>::iterator begin, std::vector<int>::iterator end, int insert)
{
	std::vector<int>::iterator middle = begin + std::distance(begin, end) / 2;
	if (std::distance(begin, end) == 1 || insert == *middle)
	{
		if (insert <= *middle)
			this->_vector.insert(middle, insert);
		else
			this->_vector.insert(end, insert);
		return ;
	}
	if (insert < *middle)
	{
		_binarySearchInsertion(begin, middle, insert);
	}
	else
	{
		_binarySearchInsertion(middle, end, insert);
	}
}

void PmergeMe::_binarySearchInsertion(std::deque<int>::iterator begin, std::deque<int>::iterator end, int insert)
{
	std::deque<int>::iterator middle = begin + std::distance(begin, end) / 2;
	if (std::distance(begin, end) == 1 || insert == *middle)
	{
		if (insert <= *middle)
			this->_deque.insert(middle, insert);
		else
			this->_deque.insert(end, insert);
		return ;
	}
	if (insert < *middle)
	{
		_binarySearchInsertion(begin, middle, insert);
	}
	else
	{
		_binarySearchInsertion(middle, end, insert);
	}
}

size_t PmergeMe::_jacobsthal(size_t n)
{
    if (n == 0)
        return 0;
	else if (n == 1)
        return 1;
    else
		return _jacobsthal(n - 1) + 2 * _jacobsthal(n - 2);
}

void PmergeMe::_insertVector()
{
	size_t		k = 1;
	size_t		j = 1;
	size_t		n = 2;

	for (size_t i = 1; i < this->_pairs.size(); i++)
	{
		if (i == j)
		{
			n++;
			j = _jacobsthal(n);
			if (j > this->_pairs.size())
				k = this->_pairs.size();
			else
				k = j;
		}
		_binarySearchInsertion(this->_vector.begin() + this->_pairs.size() - k + 1, this->_vector.end(), this->_pairs[this->_pairs.size() - k].second);
		k--;
	}
	if (this->_alone)
		_binarySearchInsertion(this->_vector.begin(), this->_vector.end(), this->_alone);
}

void PmergeMe::_insertDeque()
{
	size_t		k = 1;
	size_t		j = 1;
	size_t		n = 2;

	for (size_t i = 1; i < this->_pairs.size(); i++)
	{
		if (i == j)
		{
			n++;
			j = _jacobsthal(n);
			if (j > this->_pairs.size())
				k = this->_pairs.size();
			else
				k = j;
		}
		_binarySearchInsertion(this->_deque.begin() + this->_pairs.size() - k + 1, this->_deque.end(), this->_pairs[this->_pairs.size() - k].second);
		k--;
	}
	if (this->_alone)
		_binarySearchInsertion(this->_deque.begin(), this->_deque.end(), this->_alone);
}

void PmergeMe::_sortVector()
{
	this->_mergeVector();
	this->_insertVector();
}

void PmergeMe::_sortDeque()
{
	this->_mergeDeque();
	this->_insertDeque();
}

void PmergeMe::_printSequence(const std::string & str)
{
	std::cout << str;
	for (size_t i = 0; i < this->_vector.size(); i++)
	{
		std::cout << " ";
		std::cout << this->_vector[i];
	}
	std::cout << std::endl;
}

void PmergeMe::_printSequenced(const std::string & str)
{
	std::cout << str;
	for (size_t i = 0; i < this->_deque.size(); i++)
	{
		std::cout << " ";
		std::cout << this->_deque[i];
	}
	std::cout << std::endl;
}

/* ************************************************************************** */
/*                          Public Member functions                           */
/* ************************************************************************** */

const double & PmergeMe::getTimeDeque() const
{
	return (this->_timeDeque);
}

const double & PmergeMe::getTimeVector() const
{
	return (this->_timeVector);
}

void PmergeMe::sort()
{
	std::clock_t start_time;
	std::clock_t end_time;

	_printSequence("Before : ");
	start_time = std::clock();
	this->_sortVector();
	end_time = std::clock();
	this->_pairs.clear();
	this->_alone = 0;
	this->_timeVector = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000;
	start_time = std::clock();
	this->_sortDeque();
	end_time = std::clock();
	this->_pairs.clear();
	this->_alone = 0;
	this->_timeDeque = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1000;
	_printSequence("After :  ");
}