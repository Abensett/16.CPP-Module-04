/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

using std::cout;
using std::endl;

// Default Constructor
Dog::Dog(void) : Animal("Dog") {
    cout << "Dog constructor was called" << endl;
}
// Destructor
Dog::~Dog(void) {
    cout << "Dog " << _type << " was deconstructed" << endl;
}

// Copy Constructor
Dog::Dog(const Dog &Dog) {
    *this = Dog;
}
// Copy Assignment Operator
Dog &Dog::operator=(const Dog &Dog) {
    cout << "Dog " << Dog._type << " was copied" << endl;

    if (this != &Dog) {
        _type = Dog._type;
    }

    return *this;
}

// Getter for type
string Dog::getType(void) const {
    return _type;
}
// Setter for type
void Dog::set_type(string type) {
    _type = type;
}

void Dog::makeSound(void) const {
    cout << "Woof!" << endl;
}
