/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:54:15 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/18 00:29:26 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <algorithm>
# include <sstream>
# include <ctime>

class PmergeMe
{
	private:
		std::deque<int>						_deque;
		std::vector<int>					_vector;
		double 								_timeDeque;
		double								_timeVector;
		int									_alone;
		std::vector<std::pair<int, int> >	_pairs;
		size_t								_vectorSize;
		size_t								_dequeSize;

		void 			_mergeVector();
		void 			_mergeDeque();
		void 			_insertVector();
		void 			_insertDeque();
		static size_t	_jacobsthal(size_t);
		void			_binarySearchInsertion(std::vector<int>::iterator, std::vector<int>::iterator, int);
		void			_binarySearchInsertion(std::deque<int>::iterator, std::deque<int>::iterator, int);
		void 			_sortDeque();
		void 			_sortVector();
		void 			_printSequence(const std::string &);
		void 			_printSequenced(const std::string &);
		
	public:
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &);
		PmergeMe& operator=(const PmergeMe &);
		~PmergeMe();

		const double & getTimeDeque();
		const double & getTimeVector();
		void sort();
};

#endif