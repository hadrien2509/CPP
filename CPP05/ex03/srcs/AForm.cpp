/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:12:47 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 10:06:41 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AForm.hpp"

AForm::AForm() : _name("Standard form"), _gradeToSign(1), _gradeToExecute(1)
{
	std::cout << "Form default constructor called" << std::endl;
	this->_signed = 0;
}

AForm::AForm(const std::string name, const int sign, const int exe) : _name(name), _gradeToSign(sign), _gradeToExecute(exe)
{
	std::cout << "Form constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (this->_gradeToExecute > 150 || this->_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->_signed = 0;
}

AForm::AForm(AForm const & src) : _name("Standard form"), _gradeToSign(1), _gradeToExecute(1) 
{
	std::cout << "Form copy constructor called" << std::endl;
	(*this) = src;
}

AForm::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
}

AForm &AForm::operator=(AForm const &src)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &src)
		this->_signed = src._signed;
	return (*this);
}

void AForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_gradeToSign && this->_signed == 0)
	{
		this->_signed = 1;
		std::cout << src.getName() << " signed " << this->_name << std::endl;
	}
	else if (this->_signed == 1)
		std::cout << src.getName() << " cannot sign " << this->_name << " because the form is already signed." << std::endl;
	else
		std::cout << src.getName() << " cannot sign " << this->_name << " because his grade is too low." << std::endl;
}

int AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

const std::string AForm::getName() const
{
	return (this->_name);
}

bool AForm::isItSigned() const
{
	return (this->_signed);
}

std::ostream &operator<<(std::ostream &out, AForm const &src)
{
	out << src.getName() << " Form, minimum grade necessary to sign is " << src.getGradeToSign();
	out << " and minimum grade necessary to execute is " << src.getGradeToExecute();
	out << ". Signature : " << src.isItSigned() << std::endl;
	return (out);
}

// ---------------------- FormException Functions -----------------------

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade to exec or sign of the Form is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade to exec or sign of the Form is too low");
}
