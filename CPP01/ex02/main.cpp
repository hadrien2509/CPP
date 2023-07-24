/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:34:21 by hgeissle          #+#    #+#             */
/*   Updated: 2023/07/21 17:53:13 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "memory address of string var     : " << &var << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF << std::endl << std::endl;

	std::cout << "value of string var              : " << var << std::endl;
	std::cout << "value pointed by stringPTR       : " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF       : " << stringREF << std::endl;
}