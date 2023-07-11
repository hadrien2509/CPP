/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:41:10 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/10 17:04:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

void	megaphone(char *str)
{
	for (size_t i = 0; i < strlen(str); ++i)
		str[i] = toupper(str[i]);
	std::cout << str;
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; ++i)
		megaphone(av[i]);
	std::cout << endl;
	return 0;
}
