/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:59:03 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/24 18:40:14 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << "\n\033[1;31mTest 1 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat					hadrien("Hadrien", 140);
		ShrubberyCreationForm		a;
		RobotomyRequestForm			b;
		PresidentialPardonForm		c;

		std::cout << hadrien << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		hadrien.signForm(a);
		hadrien.executeForm(a);
		hadrien.signForm(b);
		hadrien.executeForm(b);
		hadrien.signForm(c);
		hadrien.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 2 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat					hadrien("Hadrien", 70);
		ShrubberyCreationForm		a("test2");
		RobotomyRequestForm			b("test2");
		PresidentialPardonForm		c("test2");

		std::cout << hadrien << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		hadrien.signForm(a);
		hadrien.executeForm(a);
		hadrien.signForm(b);
		hadrien.executeForm(b);
		hadrien.signForm(c);
		hadrien.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 3 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat					hadrien("Hadrien", 30);
		ShrubberyCreationForm		a("test3");
		RobotomyRequestForm			b("test3");
		PresidentialPardonForm		c("test3");

		std::cout << hadrien << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		hadrien.signForm(a);
		hadrien.executeForm(a);
		hadrien.signForm(b);
		hadrien.executeForm(b);
		hadrien.signForm(c);
		hadrien.executeForm(c);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 4 :\033[0m\n" << std::endl;
	try
	{
		Bureaucrat					hadrien("Hadrien", 1);
		ShrubberyCreationForm		a("test4");
		RobotomyRequestForm			b("test4");
		PresidentialPardonForm		c("test4");

		std::cout << hadrien << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		hadrien.signForm(a);
		hadrien.executeForm(a);
		hadrien.signForm(b);
		hadrien.executeForm(b);
		hadrien.signForm(c);
		hadrien.executeForm(c);
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