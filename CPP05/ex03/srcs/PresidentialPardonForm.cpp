/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:27:39 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 10:31:30 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("Murillo")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	(*this) = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	this->_target = src._target;
	return (*this);
}

const std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
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
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}