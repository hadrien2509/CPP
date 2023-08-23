/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:25:19 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/22 16:48:23 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	// std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor called" << std::endl;
}

Cure &	Cure::operator=(Cure const & src)
{
	// std::cout << "Cure assignation operator called" << std::endl;
	(void)src;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
