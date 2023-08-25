/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:59:03 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 11:20:52 by hgeissle         ###   ########.fr       */
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
		Bureaucrat					jean("Jean", 1);
		Bureaucrat					murillo("Murillo", 146);
		Bureaucrat					hadrien("Hadrien", 145);
		ShrubberyCreationForm		a;
		RobotomyRequestForm			b;
		PresidentialPardonForm		c;

		std::cout << "\n" << murillo << std::endl;
		std::cout << hadrien << std::endl;
		std::cout << jean << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		murillo.signForm(a);
		hadrien.signForm(a);
		jean.signForm(a);
		hadrien.incrementGrade(7);
		std::cout << "\n" << hadrien << std::endl;		
		hadrien.executeForm(a);
		hadrien.incrementGrade(1);
		std::cout << "\n" << hadrien << std::endl;		
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
		Bureaucrat					hadrien("Hadrien", 46);
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
		Bureaucrat					hadrien("Hadrien", 6);
		ShrubberyCreationForm		a("test3");
		RobotomyRequestForm			b("test3");
		RobotomyRequestForm			murillo;
		PresidentialPardonForm		c("test3");

		std::cout << hadrien << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		hadrien.signForm(a);
		hadrien.executeForm(a);
		hadrien.signForm(b);
		hadrien.executeForm(b);
		hadrien.executeForm(murillo);
		hadrien.signForm(murillo);
		hadrien.executeForm(murillo);
		hadrien.signForm(c);
		hadrien.executeForm(c);
		hadrien.incrementGrade(1);
		std::cout << "\n" << hadrien << std::endl;
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