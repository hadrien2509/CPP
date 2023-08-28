/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:42:57 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 16:49:39 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(*this) = src;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "Intern assignment operator called" << std::endl;
	(void)src;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string array[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int i = 0;

	for (i = 0; i < 3; i++)
	{
		if (array[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			break ;
		}
	}
	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new PresidentialPardonForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			throw Intern::UnknownFormException();
	}
	return 0;
}

const char *Intern::UnknownFormException::what() const throw()
{
	return ("Intern cannot create the form because the form name is not valid.");
}