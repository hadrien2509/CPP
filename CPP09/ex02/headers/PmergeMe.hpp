/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:54:15 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/14 19:34:40 by hgeissle         ###   ########.fr       */
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

class PmergeMe
{
	private:
		std::deque<int>						_deque;
		std::vector<int>					_vector;
		double 								_timeDeque;
		double								_timeVector;
		int									_alone = 0;
		std::vector<std::pair<int, int>>	_pairs;

		void 		_mergeVector();
		void 		_insertVector();
		static int	_jacobsthal(int n);
		void		_binarySearchInsertion(std::vector<int>::iterator, std::vector<int>::iterator, int);
		void 		_sortDeque();
		void 		_sortVector();
		
	public:
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &);
		PmergeMe& operator=(const PmergeMe &);
		~PmergeMe();

		const double & getTimeDeque();
		const double & getTimeVector();
		void sort();
};

std::ostream &operator<<(std::ostream &out, PmergeMe const &value);

#endif