/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/22 17:29:55 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Dog.hpp"
#include "../header_files/Cat.hpp"
#include "../header_files/WrongCat.hpp"

int	main(void)
{
	std::cout << "\n\033[1;31mPersonal tests\033[0m\n" << std::endl;
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;
	}
	{
		const Dog* j = new Dog();
		const Cat* i = new Cat();
		
		std::cout << std::endl;
		Brain	*dog_brain = j->getBrain();
		dog_brain->getIdea(0);
		dog_brain->getIdea(1);
		dog_brain->setIdea(0, "Idea 1");
		dog_brain->getIdea(0);
		dog_brain->getIdea(1);
		dog_brain->getIdea(99);
	
		std::cout << std::endl;
		Brain	*cat_brain = i->getBrain();
		cat_brain->getIdea(0);
		cat_brain->getIdea(1);
		cat_brain->setIdea(0, "Idea 1");
		cat_brain->getIdea(0);
		cat_brain->getIdea(1);
		cat_brain->getIdea(99);
	
		delete j;
		delete i;
	}
	std::cout << "\n\033[1;31mArray test\033[0m\n" << std::endl;
	{
		AAnimal	*array[4];

		for (int i = 0; i < 2; i++)
		{
			array[i] = new Dog();
		}
		for (int i = 2; i < 4; i++)
		{
			array[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
		{
			delete array[i];
		}
	}
	return (0);
}
