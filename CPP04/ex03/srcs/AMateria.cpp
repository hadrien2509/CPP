/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:10:58 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/22 16:50:01 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	// std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & src)
{
	// std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

void AMateria::setType(std::string type)
{
	this->type = type;
}
