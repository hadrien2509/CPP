/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:42:57 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 11:52:21 by hgeissle         ###   ########.fr       */
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
	int index;

	for (int i = 0; i < 3; i++)
	{
		if (array[i] == formName)
			std::cout << "Intern creates " << formName << std::endl;
	}
	switch (index)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new PresidentialPardonForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Intern cannot create " << formName << " because the form name is not valid." << std::endl;
	}
}