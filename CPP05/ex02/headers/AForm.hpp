/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:47:33 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 16:20:19 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _signed;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	AForm();
	AForm(const std::string name, const int sign, const int exe);
	AForm(AForm const &src);
	virtual ~AForm();
	AForm &operator=(AForm const &src);

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
	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	int getGradeToSign() const;
	int getGradeToExecute() const;
	const std::string getName() const;
	bool isItSigned() const;

	void beSigned(Bureaucrat &);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, AForm const &src);

#endif