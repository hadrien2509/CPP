/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:59:03 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/24 14:47:59 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

int	main(void)
{
	std::cout << "\n\033[1;31mTest 1 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat	steve;
		Form		a("formA", 150, 150);

		std::cout << steve << std::endl;
		std::cout << a << std::endl;

		steve.signForm(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 2 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat	steve;
		Form		a;

		std::cout << steve << std::endl;
		std::cout << a << std::endl;

		steve.signForm(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 3 :\033[0m\n" << std::endl;
	try
	{
		Form		a("Invalid form", 0, 0);
		Bureaucrat	hadrien("Hadrien", 0);

		std::cout << hadrien << std::endl;
		std::cout << a << std::endl;

		hadrien.signForm(a);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	return (0);
}