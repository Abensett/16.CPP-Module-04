/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

using std::cout;
using std::endl;

// Default Constructor
WrongAnimal::WrongAnimal(void) : _type("") {
    cout << "WrongAnimal constructor was called" << endl;
}
// Destructor
WrongAnimal::~WrongAnimal(void) {
    cout << "WrongAnimal " << _type << " was deconstructed" << endl;
}
// Constructor with name
WrongAnimal::WrongAnimal(string name) : _type(name) {
    cout << "WrongAnimal " << _type << " was constructed" << endl;
}
// Copy Constructor
WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {
    *this = WrongAnimal;
}
// Copy Assignment Operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal) {
    cout << "WrongAnimal " << WrongAnimal._type << " was copied" << endl;

    if (this != &WrongAnimal) {
        _type = WrongAnimal._type;
    }

    return *this;
}

// Getter for name
string WrongAnimal::getType(void) const {
    return _type;
}
// Setter for name
void WrongAnimal::set_type(string type) {
    _type = type;
}
void WrongAnimal::makeSound(void) const {
    cout << " I am a Wronganimal" << endl;
}
