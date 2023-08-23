/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:06:45 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/22 14:55:45 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		AMateria &	operator=(AMateria const & src);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		void setType(std::string type);

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif