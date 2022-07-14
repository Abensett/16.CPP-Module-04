/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/07/13 22:36:02 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

using std::cout;
using std::endl;

// Default Constructor
MateriaSource::MateriaSource(void)
{
    cout << "MateriaSource constructor was called" << endl;
    for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
// Destructor
MateriaSource::~MateriaSource(void) {
    for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
    cout << "MateriaSource was deconstructed" << endl;
}

// Copy Constructor A CHECK
MateriaSource::MateriaSource(const MateriaSource &MateriaSource) {
    cout << "MateriaSource copy constructor was called." << endl;
    *this = MateriaSource;
}
// Copy Assignment Operator
MateriaSource &MateriaSource::operator=(const MateriaSource &MateriaSource) {
    cout << "MateriaSource was copied" << endl;

    if (this != &MateriaSource)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (MateriaSource._inventory[i])
				_inventory[i] = MateriaSource._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
    return *this;
}
// A check
void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			std::cout << "MateriaSource learned " << m->getType() << "in slot" << i << std::endl;
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Can't learn new materia because inventory full" << std::endl;
	delete m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	std::cout << "Can't create " << type << " materia  is unknown" << std::endl;
	return (NULL);
}