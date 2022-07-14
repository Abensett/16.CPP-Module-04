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
    _Brain = new Brain();
}
// Destructor
Cat::~Cat(void) {
    delete _Brain;
    cout << "Cat " << _type << " was deconstructed" << endl;
}

// Copy Constructor
Cat::Cat(const Cat &Cat) : Animal(Cat), _Brain(new Brain(*(Cat._Brain)))
{
    *_Brain = *Cat._Brain;
	std::cout << "Cat copy constructor called" << std::endl;
}
// Copy Assignment Operator
Cat &Cat::operator=(const Cat &Cat) {
    cout << "Cat " << Cat._type << " was copied" << endl;

    if (this != &Cat) {
        _type = Cat._type;
        *_Brain = *Cat._Brain;
    }

    return *this;
}

// Getter for name
string Cat::getType(void) const {
    return _type;
}
// Setter for name
void Cat::set_type(string type) {
    _type = type;
}

void Cat::makeSound(void) const {
    cout << " meows" << endl;
}

void Cat::showIdeas(void) const
{
    _Brain->printFirstIdeas();
}
