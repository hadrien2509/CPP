/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:11:46 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/30 19:57:29 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Serializer.hpp"

Serializer::Serializer(void)
{
}

Serializer::Serializer(Serializer const &src)
{
    *this = src;
}

Serializer::~Serializer(void)
{
}

Serializer& Serializer::operator=(Serializer const &src)
{
    (void)src;
    return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t	serialized;

	serialized = reinterpret_cast<uintptr_t>(ptr);
	return (serialized);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

