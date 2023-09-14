/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:49:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/14 20:57:44 by hgeissle         ###   ########.fr       */
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
	for (int i = 0; i < this->_vector.size(); i++)		// Creating pairs
	{
		if (i % 2)
		{
			if (this->_vector[i - 1] <= this->_vector[i])
				this->_pairs.push_back(std::make_pair(this->_vector[i - 1], this->_vector[i]));
			if (this->_vector[i - 1] > this->_vector[i])
				this->_pairs.push_back(std::make_pair(this->_vector[i], this->_vector[i]));
		}
		else if (i == this->_vector.size() - 1)
		{
			this->_alone = this->_vector[i];
		}
	}

	std::sort(this->_pairs.begin(), this->_pairs.end());			// Sorting pairs relative to lowest value of each pair
	this->_vector.clear();							// Clear vector
    for (int i = 0; i < this->_pairs.size(); i++)			// Put lowest value of each pair in vector
	{
		this->_vector[i] = this->_pairs[i].first;
		if (i == this->_pairs.size() - 1)
			this->_vector[i] = this->_pairs[i].second;		// Put pair of highest value of vector at the end of the vector
    }
}

void PmergeMe::_binarySearchInsertion(std::vector<int>::iterator begin, std::vector<int>::iterator end, int insert)
{
	std::vector<int>::iterator middle = begin + std::distance(begin, end) / 2;
	if (std::distance(begin, end) == 1 || insert == *middle)
	{
		this->_vector.insert(middle, insert);
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

int PmergeMe::_jacobsthal(int n)
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
	int		k = 0;

	for (int i = 2; i < 2 + this->_pairs.size(); i++)
	{
		if (i - 2 < k) 
			_binarySearchInsertion(this->_vector.begin() + i - 2, this->_vector.end(), this->_pairs[i - 2].second);
		else
		{
			k = _jacobsthal(i);
			_binarySearchInsertion(this->_vector.begin() + k - 1, this->_vector.end(), this->_pairs[k - 1].second);
		}
	}
	if (this->_alone)
		_binarySearchInsertion(this->_vector.begin(), this->_vector.end(), this->_alone);
}

void PmergeMe::_sortVector()
{
	this->_mergeVector();
	this->_insertVector();
}