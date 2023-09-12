/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:22:49 by hgeissle          #+#    #+#             */
/*   Updated: 2023/09/02 15:47:42 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Array.hpp"

template <typename T>

Array<T>::Array() : _array(new T[0]), _size(0) {}

template <typename T>

Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>

Array<T>& Array<T>::operator=(Array<T> const &src)
{
	if (this != &src)
	{
		this->_size = src._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
		{
			this->_array[i] = src._array[i];
		}
	}
	return (*this);
}

template <typename T>

Array<T>::Array(Array const &src)
{
	*this = src;
}

template <typename T>

Array<T>::~Array()
{
	delete[] this->_array;
}

template <typename T>

T& Array<T>::operator[](unsigned int n) const
{
	if (n >= _size)
		throw Array<T>::OutOfBoundsException();
	return this->_array[n];
}

template <typename T>

unsigned int Array<T>::size() const
{
	return this->_size;
}
