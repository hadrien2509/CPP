/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:04:39 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/24 19:42:55 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("home")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 72, 45), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	(*this) = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	this->_target = src._target;
	return (*this);
}

const std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeToExecute() < executor.getGrade())
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->getName() << " because his grade is too low." << std::endl;
		return ;
	}
	if (this->isItSigned() == false)
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->getName() << " because the form is not signed." << std::endl;
		return ;
	}
	else
		std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	std::ofstream outputFile(this->_target + "_shrubbery");

    if (!outputFile.is_open()) {
        std::cerr << "Unable to open the file for writing." << std::endl;
        return ;
    }
    // ASCII art of a tree
    outputFile << "       _-_         \n"
                        "    /~~   ~~\\     \n"
                        " /~~         ~~\\  \n"
                        "{               }  \n"
                        " \\  _-     -_  /  \n"
                        "   ~  \\ \\/\\/  ~ \n"
                        "_- -   | | _- _    \n"
                        " |_|-  | | ||-|    \n"
                        "  |   // \\  |      ";
    outputFile.close();
}
