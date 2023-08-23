/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:59:03 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/23 16:32:47 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\n\033[1;31mTest 1 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat	steve;
		Bureaucrat	xavier("Xavier", 1);
		Bureaucrat	archi("Archi", 2);

		std::cout << steve << std::endl;
		std::cout << xavier << std::endl;
		std::cout << archi << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 2 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat	hadrien("Hadrien", 0);

		std::cout << hadrien << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 3 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat	hadrien("Hadrien", 151);

		std::cout << hadrien << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 4 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat hadrien("Hadrien", 140);
		
		hadrien.decrementGrade(20);

		std::cout << hadrien << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 5 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat hadrien("Hadrien", 10);
		
		hadrien.incrementGrade(20);

		std::cout << hadrien << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	return (0);
}