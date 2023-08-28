/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:34:46 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/25 16:49:20 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern &operator=(Intern const &src);
		Intern(Intern const &src);
		~Intern();
	
		AForm *makeForm(std::string name, std::string target);

		class UnknownFormException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif