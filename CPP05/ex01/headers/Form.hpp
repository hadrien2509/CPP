/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:47:33 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/23 21:08:54 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	Form();
	Form(const std::string name, const int sign, const int exe);
	Form(Form const &src);
	~Form();
	Form &operator=(Form const &src);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	void beSigned(Bureaucrat &);
	const int getGradeToSign() const;
	const int getGradeToExecute() const;
	const std::string getName() const;
	bool isItSigned() const;
};

std::ostream &operator<<(std::ostream &out, Form const &src);

#endif