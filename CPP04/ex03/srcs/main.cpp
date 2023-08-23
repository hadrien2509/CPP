/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:51:11 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/22 17:19:49 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/MateriaSource.hpp"
#include "../header_files/Ice.hpp"
#include "../header_files/Cure.hpp"
#include "../header_files/Character.hpp"

int main( void )
{
	std::cout << "\n\033[1;31mSubject tests :\033[0m\n" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "\n\033[1;31mPersonal tests\033[0m\n" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());

		Character* me = new Character("myself");
		
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->unequip(0);
		tmp = me->drop;
		me->equip(tmp);
		me->use(0, *me);
		me->unequip(0);
		tmp = me->drop;
		delete tmp;

		delete me;
		delete src;
	}
	std::cout << std::endl;
	return 0 ;
}