/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:49:50 by hgeissle          #+#    #+#             */
/*   Updated: 2023/08/10 11:58:31 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_files/Dog.hpp"
#include "../header_files/Cat.hpp"
#include "../header_files/WrongCat.hpp"

int	main(void)
{
	{
		std::cout << "First test :\n" << std::endl;
		Animal	probably_a_cricket;

		probably_a_cricket.makeSound();
		std::cout << "Type is " << probably_a_cricket.getType() << "... but from the sound of it, probably a cricket" << std::endl;
	}
	{
		std::cout << "\nSecond test :\n" << std::endl;
		Cat	caracole;

		caracole.makeSound();
		std::cout << "Type is " << caracole.getType() << std::endl;
	}
	{
		std::cout << "\nThird test :\n" << std::endl;
		Dog	medor;

		medor.makeSound();
		std::cout << "Type is " << medor.getType() << std::endl;
	}
	{
		std::cout << "\nFourth test :\n" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
	}
	{
		std::cout << "\nLast test :\n" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete(meta);
		delete(j);
		delete(i);
	}
	return (0);
}
