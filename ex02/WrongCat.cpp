/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/18 21:08:18 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

using std::cout;
using std::endl;

// Default Constructor
WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
    cout << "WrongCat constructor was called" << endl;
}
// Destructor
WrongCat::~WrongCat(void) {
    cout << "WrongCat " << _type << " was deconstructed" << endl;
}
// Constructor with name
WrongCat::WrongCat(string name) : WrongAnimal(name) {
    cout << "WrongCat " << _type << " was constructed" << endl;
}
// Copy Constructor
WrongCat::WrongCat(const WrongCat &WrongCat) {
    *this = WrongCat;
}
// Copy Assignment Operator
WrongCat &WrongCat::operator=(const WrongCat &WrongCat) {
    cout << "WrongCat " << WrongCat._type << " was copied" << endl;

    if (this != &WrongCat) {
        _type = WrongCat._type;
    }

    return *this;
}

// Getter for name
string WrongCat::getType(void) const {
    return _type;
}
// Setter for name
void WrongCat::set_type(string type) {
    _type = type;
}

void WrongCat::makeSound(void) const {
    cout << " Wrongmeows" << endl;
}
