/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:59:03 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 16:56:33 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bureaucrat.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/Intern.hpp"

int	main(void)
{
	std::cout << "\n\033[1;31mTest 1 :\033[0m\n" << std::endl;
	try
	{
		Intern intern;
		AForm *form;

		form = intern.makeForm("shrubbery creation", "Murillo_home");
		std::cout << *form;
		delete form;
		form = intern.makeForm("robotomy request", "Murillo");
		std::cout << *form;
		delete form;
		form = intern.makeForm("presidential pardon", "Murillo");
		std::cout << *form;
		delete form;
		form = intern.makeForm("adsfafdfas", "Murillo");
		form = intern.makeForm("presidential pardon", "Murillo");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 2 :\033[0m\n" << std::endl;
	try
	{
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 3 :\033[0m\n" << std::endl;
	try
	{
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 4 :\033[0m\n" << std::endl;
	try
	{
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n\033[1;31mTest 5 :\033[0m\n" << std::endl;
	try
	{
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	return (0);
}