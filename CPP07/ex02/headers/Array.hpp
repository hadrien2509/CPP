/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:27:54 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/31 17:52:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

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

		T	&operator[](unsigned int i) const;
		int	size() const;
};

#endif