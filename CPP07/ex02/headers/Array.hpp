/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:27:54 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/04 13:13:48 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP


template <typename T>

class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &src);
		Array& operator=(Array const &src);
		~Array();

		class OutOfBoundsException: public std::exception
		{
			virtual const char* what() const throw() {
				return ("Index out of bounds");
			}
		};

		T				&operator[](unsigned int i) const;
		unsigned int	size() const;
};

#include "../srcs/Array.tpp"

#endif