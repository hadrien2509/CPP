/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:21:17 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 16:35:34 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Murillo")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	(*this) = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	this->_target = src._target;
	return (*this);
}

const std::string RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(0));
	int	random_value = rand() % 2;

	if (executor.getGrade() > this->getGradeToExecute())
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->getName() << " because his grade is too low." << std::endl;
		throw AForm::GradeTooLowException();
	}
	if (this->isItSigned() == false)
	{
		std::cout << "Bureaucrat " << executor.getName() << " cannot execute " << this->getName() << " because the form is not signed." << std::endl;
		throw AForm::FormNotSignedException();
	}
	std::cout << executor.getName() << " executes " << this->getName() << std::endl;
	std::cout << "Brr brr brrzzzzzzzzz " << std::endl;
	if (random_value)
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->_target << " has failed to be robotomized." << std::endl;
}