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
    _Brain = new Brain();
}

// Destructor
Dog::~Dog(void) {
    delete _Brain;
    cout << "Dog " << _type << " was deconstructed" << endl;
}

// Constructor with type
Dog::Dog(string type) : Animal(type) {
    cout << "Dog " << _type << " was constructed" << endl;
    _Brain = new Brain();
}
// Copy Constructor
Dog::Dog(const Dog &Dog): Animal(Dog), _Brain(new Brain(*(Dog._Brain)))
 {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = Dog;
    *_Brain = *Dog._Brain;
}
// Copy Assignment Operator
Dog &Dog::operator=(const Dog &Dog) {
    cout << "Dog " << Dog._type << " was copied" << endl;

    if (this != &Dog) {
        _type = Dog._type;
        *_Brain = *Dog._Brain;
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

void Dog::showIdeas(void) const
{
    _Brain->printFirstIdeas();
}
