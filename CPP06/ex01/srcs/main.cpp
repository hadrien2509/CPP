/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:59:06 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/30 20:49:33 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Serializer.hpp"

int main(void)
{
	Data 	*ptr = new Data;
	Data	*save = 0;
	uintptr_t	nb;

	nb = Serializer::serialize(ptr);
	save = ptr;
	std::cout << "uintptr_t value : " << nb << std::endl;
	ptr = Serializer::deserialize(nb);
	std::cout << "\nOld value : " << save << "\nNew value : " << ptr << std::endl;
	delete save;
}