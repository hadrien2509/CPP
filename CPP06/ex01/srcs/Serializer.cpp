/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:11:46 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/30 13:12:53 by hgeissle         ###   ########.fr       */
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

