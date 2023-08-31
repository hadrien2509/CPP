/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:55:01 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/31 16:20:53 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/iter.hpp"

int main(void)
{
	int				array1[5] = {1, 2, 3, 4, 5};
	std::string		array2[5] = {"one", "two", "three", "four", "five"};
	double			array3[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

	iter(array1, 5, &print);
	iter(array2, 5, &print);
	iter(array3, 5, &print);
}