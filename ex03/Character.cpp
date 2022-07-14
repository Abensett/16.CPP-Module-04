/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/07/13 22:36:02 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

using std::cout;
using std::endl;

// Default Constructor
Character::Character(void) : _name("Unnamed") {
    cout << "Character constructor was called" << endl;
    for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_on_the_floor[i] = NULL;
}
// Destructor
Character::~Character(void) {
    for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	for (int i = 0; i < 100; i++)
		if (_on_the_floor[i])
			delete _on_the_floor[i];
    cout << "Character " << _name << " was deconstructed" << endl;
}
// Constructor with type
Character::Character(const string &name) : _name(name) {
    cout << "Character " << _name << " was constructed" << endl;
    for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	for (int i = 0; i < 100; i++)
		_on_the_floor[i] = NULL;
}
// Copy Constructor
Character::Character(const Character &Character) {
    	cout << "Character copy constructor was called." << endl;
		*this = Character;

}
// Copy Assignment Operator
Character &Character::operator=(const Character &Character) {
    cout << "Character " << Character._name << " was copied" << endl;

    if (this != &Character)
	{
		_name = Character._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (Character._inventory[i])
				_inventory[i] = Character._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
    return *this;
}



const std::string	&Character::getName(void) const
{
	return (_name);
}

// Equips on a free slot or does nothing
void	Character::equip(AMateria *m)
{

	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << _name << " equips " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Cannot equip " <<  m->getType() << " because inventory full" << std::endl;
	delete m;
}
// Unequips index Idx if does not exist, does nothing
void	Character::unequip(int idx)
{
	static int floor = 0;
	if (idx >= 0 && idx < 4)
	{
		_on_the_floor[floor++] = _inventory[idx];
		_inventory[idx] = NULL;
	}
}
// function member use that uses the Materia stored at index Idx, if not does nothing
void	Character::use(int idx ,ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
	{
		_inventory[idx]->use(target);
		return ;
	}
	std::cout << _name  << " does nothing to " << target.getName() << std::endl;
}
