/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:21:41 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/22 17:22:26 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_memory[i] = 0;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &src)
{
	// std::cout << "MateriaSource assignation operator called" << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_memory[i])
				delete this->_memory[i];
			this->_memory[i] = src._memory[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	// std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = src;
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i])
			delete this->_memory[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_memory[i])
		{
			this->_memory[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_memory[i]->getType() == type)
			return (this->_memory[i]->clone());
	}
	return 0;
}