/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:41:10 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/14 17:17:43 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <cstring>

void	megaphone(std::string str)
{
	for (size_t i = 0; i < str.length(); ++i)
		str[i] = toupper(str[i]);
	std::cout << str;
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; ++i)
		megaphone(av[i]);
	std::cout << std::endl;
	return 0;
}
