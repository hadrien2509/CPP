/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:54:15 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/14 16:55:53 by hgeissle         ###   ########.fr       */
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
		std::deque<int>		_deque;
		std::vector<int>	_vector;
		double 				_timeDeque;
		double				_timeVector;
		int					_alone = 0;
		

		void _mergeVector();
		void _insertVector();
		void _sortDeque();
		void _sortVector();
		
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