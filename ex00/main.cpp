/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:13 by abensett          #+#    #+#             */
/*   Updated: 2022/06/18 21:12:41 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout <<std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout <<std::endl;

	const WrongAnimal* l = new WrongAnimal();				// even tho it 's a cat
	const WrongAnimal* k = new WrongCat();				// even tho it 's a cat
	std::cout << k->getType() << " " << std::endl;

	std::cout <<std::endl;
	k->makeSound();										// wronganimal sound because makesound is not une methode
	l->makeSound();
	std::cout <<std::endl;

	delete i;											// virtual au constructeur pour pouvoir delete
	delete j;
	delete k;
	delete l;
	delete meta;
	return 0;
}
