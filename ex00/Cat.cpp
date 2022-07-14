/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

using std::cout;
using std::endl;

// Default Constructor
Cat::Cat(void) : Animal("Cat") {
    cout << "Cat constructor was called" << endl;
}
// Destructor
Cat::~Cat(void) {
    cout << "Cat " << _type << " was deconstructed" << endl;
}

// Copy Constructor
Cat::Cat(const Cat &Cat) {
    *this = Cat;
}
// Copy Assignment Operator
Cat &Cat::operator=(const Cat &Cat) {
    cout << "Cat " << Cat._type << " was copied" << endl;

    if (this != &Cat) {
        _type = Cat._type;
    }
    return *this;
}

// Getter for type
string Cat::getType(void) const {
    return _type;
}
// Setter for type
void Cat::set_type(string type) {
    _type = type;
}

void Cat::makeSound(void) const {
    cout << " meows" << endl;
}
