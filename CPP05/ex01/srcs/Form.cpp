/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:12:47 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/23 21:11:40 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Form.hpp"

Form::Form() : _name("Standard form"), _gradeToSign(1), _gradeToExecute(1)
{
	std::cout << "Form default constructor called" << std::endl;
	this->_signed = 0;
}

Form::Form(const std::string name, const int sign, const int exe) : _name(name), _gradeToSign(sign), _gradeToExecute(sign)
{
	std::cout << "Form constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_gradeToExecute > 150 || this->_gradeToExecute > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_signed = 0;
}

Form::Form(Form const & src) : _name("Standard form"), _gradeToSign(1), _gradeToExecute(1) 
{
	std::cout << "Form copy constructor called" << std::endl;
	(*this) = src;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &src)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &src)
		this->_signed = src._signed;
}

void Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() > this->_gradeToSign)
		this->_signed = 1;
	src.signForm(*this);
}

const int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

const int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

const std::string Form::getName() const
{
	return (this->_name);
}

bool Form::isItSigned() const
{
	return (this->_signed);
}

std::ostream &operator<<(std::ostream &out, Form const &src)
{
	out << src.getName() << " Form, minimum grade necessary to sign is " << src.getGradeToSign() << " and minimum grade necessary to execute is " << src.getGradeToExecute() << std::endl;
	return (out);
}