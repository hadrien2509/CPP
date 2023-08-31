/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:22:49 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/31 17:53:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Array.hpp"

template <typename T>

Array<T>::Array()
{
	this->_array = new T[0];
	this->_size = 0;
}

template <typename T>

Array<T>::Array(unsigned int n)
{
	this->_array = new T[n];
	this->_size = n;
}

template <typename T>

Array& Array<T>::operator=(Array const &src)
{
	if (this != &src)
	{
		delete this->_array[];
		this->_array = new Array;
		for (unsigned int i = 0; i < this->_size; i++)
		{
			this->_array[i] = src.array[i];
		}
	}
}
