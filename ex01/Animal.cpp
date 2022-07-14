/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

using std::cout;
using std::endl;

// Default Constructor
Animal::Animal(void) : _type("") {
    cout << "Animal constructor was called" << endl;
}
// Destructor
Animal::~Animal(void) {
    cout << "Animal " << _type << " was deconstructed" << endl;
}
// Constructor with type
Animal::Animal(string type) : _type(type) {
    cout << "Animal " << _type << " was constructed" << endl;
}
// Copy Constructor
Animal::Animal(const Animal &Animal) {
    *this = Animal;
}
// Copy Assignment Operator
Animal &Animal::operator=(const Animal &Animal) {
    cout << "Animal " << Animal._type << " was copied" << endl;

    if (this != &Animal) {
        _type = Animal._type;
    }

    return *this;
}

// Getter for type
string Animal::getType(void) const {
    return _type;
}
// Setter for type
void Animal::set_type(string type) {
    _type = type;
}
void Animal::makeSound(void) const {
    cout << " I am an animal" << endl;
}
