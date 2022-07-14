/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 15:42:28 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 18:57:41 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


int main()
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
    tmp = src->createMateria("fire");

    ICharacter* bob = new Character("bob");
    ICharacter* Copy = new Character("Copy de moi");
    ICharacter* Copy2(me);
    me->use(0, *bob);
    me->use(1, *bob);
    Copy->use(0, *me);
    Copy->use(1, *me);
    Copy2->use(0, *me);
    Copy2->use(1, *me);

    me->unequip(1);
    me->unequip(1);
    me->use(1, *bob);


    delete bob;
    delete me;
    delete src;
    delete Copy;
    return 0;
}
