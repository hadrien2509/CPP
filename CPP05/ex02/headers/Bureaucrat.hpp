/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:59:14 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 16:20:13 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat &	operator=(Bureaucrat const & src);
		~Bureaucrat();

		std::string		getName() const;
		int				getGrade() const;
		void			incrementGrade(int n);
		void			decrementGrade(int n);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		void signForm(AForm &src);
		void executeForm(AForm const &executor);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);

#endif