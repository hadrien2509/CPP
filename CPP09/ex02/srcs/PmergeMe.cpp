/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:49:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/14 17:03:07 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PmergeMe.hpp"

std::ostream &operator<<(std::ostream& out, PmergeMe const & value)
{
	(void)out;
	(void)value;
	return out;
}

PmergeMe::PmergeMe(int ac, char **av) : _alone(0)
{
	if (ac < 2)
		throw std::runtime_error("Error");
	int number;
	for (int i = 1; i < ac; i++)
	{
		std::istringstream iss(av[i]);
		iss >> number;
		if (iss.fail())
			throw (std::runtime_error("Error"));
		if (number < 0)
			throw (std::runtime_error("Error"));
		this->_vector.push_back(number);
		this->_deque.push_back(number);
		std::cout << number << std::endl;
	}
}

PmergeMe::~PmergeMe() {}

void PmergeMe::_mergeVector()
{
	std::vector<std::pair<int, int>>	pairs;

	for (int i = 0; i < this->_vector.size(); i++)		// Creating pairs
	{
		if (i % 2)
		{
			if (this->_vector[i - 1] <= this->_vector[i])
				pairs.push_back(std::make_pair(this->_vector[i - 1], this->_vector[i]));
			if (this->_vector[i - 1] > this->_vector[i])
				pairs.push_back(std::make_pair(this->_vector[i], this->_vector[i]));
		}
		else if (i == this->_vector.size() - 1)
		{
			this->_alone = this->_vector[i];
		}
	}

	std::sort(pairs.begin(), pairs.end());			// Sorting pairs relative to lowest value of each pair
	this->_vector.clear();							// Clear vector
    for (int i = 0; i < pairs.size(); i++)			// Put lowest value of each pair in vector
	{
		this->_vector[i] = pairs[i].first;
		if (i == pairs.size() - 1)
			this->_vector[i] = pairs[i].second;
    }
}

void PmergeMe::_binarySearchInsertion()
{
	std::vector<int>::iterator begin = numbers.begin();
    std::vector<int>::iterator end = numbers.end();

    // Calculate the middle iterator
    std::vector<int>::iterator middle = begin;
    std::advance(middle, std::distance(begin, end) / 2);

    // Create two separate ranges
    std::vector<int> firstHalf(begin, middle);
    std::vector<int> secondHalf(middle, end);
}

void PmergeMe::_insertVector()
{
	for 
}

void PmergeMe::_sortVector()
{
	this->_mergeVector();
	this->_insertVector();
}

void PmergeMe::_sortVector()
{
	int	half_size = this->_vector.size() / 2;
	
	int *left_subarray = new int[half_size];
    int *right_subarray = new int[half_size];

	for (int i = 0; i < half_size; i++)
		left_subarray[i] = this->_vector[i];

	for (int j = 0; j < half_size; j++)
		right_subarray[j] = this->_vector[half_size + j];

	this->_vector.clear();
	int	index_max = 0;
	for (int i = 0; i < half_size; i++)
	{
		if (left_subarray[i] <= right_subarray[i])
		{
			this->_vector.push_back(left_subarray[i]);
		}
		else
		{
			this->_vector.push_back(right_subarray[i]);
		}
	}
	std::sort(this->_vector.begin(), this->_vector.end());
	this->_vector.push_back();
}