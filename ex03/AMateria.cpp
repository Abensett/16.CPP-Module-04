/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 14:43:23 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

using std::cout;
using std::endl;

// Default Constructor
AMateria::AMateria(void) : _type("") {
    cout << "AMateria constructor was called" << endl;
}
// Destructor
AMateria::~AMateria(void) {
    cout << "AMateria " << _type << " was deconstructed" << endl;
}
// Constructor with type
AMateria::AMateria(const string  &type) : _type(type) {
    cout << "AMateria " << _type << " was constructed" << endl;
}
// Copy Constructor
AMateria::AMateria(const AMateria &AMateria) {
    *this = AMateria;
}
// Copy Assignment Operator
AMateria &AMateria::operator=(const AMateria &AMateria) {
    cout << "AMateria " << AMateria._type << " was copied" << endl;

    if (this != &AMateria) {
        _type = AMateria._type;
    }
    return *this;
}

std::string const	&AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "uses something on " << target.getName() << std::endl;
}
