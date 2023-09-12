/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:59:09 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/06 10:32:08 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <climits>
# include <iterator>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int> 	_array;

	public:
		Span(unsigned int N);
		Span(Span const &src);
		Span& operator=(Span const &src);
		~Span();
		
		void				addNumber(int n);
		unsigned int		shortestSpan() const;
		unsigned int		longestSpan();
		void				addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		const std::vector<int>& getNumbers() const;

		class	FullArrayException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, Span const &value);

#endif