/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:13 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 17:56:42 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


static void ArraySubject()
{
	int	len = 5;
	Animal *Array [len * 2];									// array of animal first half dogs, second one cats
	for (int i = 0; i < len; i++)							// filling the array
	{
		Array[i] = new Dog();
		Array[len + i] = new Cat();
	}
	for (int i = 0; i < len  ; i++)							// freeing each animal
	{
	 	delete Array[i];
	 	delete Array[len + i];
	}

}

static void DeepCopy()
{
	Cat	cat1;
	Cat	cat2;

	std::cout << std::endl;
	cat1.showIdeas();
	cat2.showIdeas();
	cat2 = cat1;
	std::cout << std::endl << "After assignation :" << std::endl;			// check copy par assignation
	cat1.showIdeas();
	cat2.showIdeas();
	std::cout << std::endl;


	Dog	dog1;																// check constructeur par copy
	Dog	dog2(dog1);
	std::cout << std::endl;
	dog1.showIdeas();
	dog2.showIdeas();
	std::cout << std::endl;

}

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	ArraySubject();
	DeepCopy();
	delete i;
	delete j;
	return 0;
}
