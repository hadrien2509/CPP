/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:59:09 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/04 20:54:14 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <climits>

class Span
{
	private:
		unsigned int		_N;
		unsigned int		_size;
		std::vector<int> 	_array;

	public:
		Span(unsigned int N);
		Span(Span const &src);
		Span& operator=(Span const &src);
		~Span();
		
		void				addNumber(int n);
		unsigned int		shortestSpan();
		unsigned int		longestSpan();
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

#endif