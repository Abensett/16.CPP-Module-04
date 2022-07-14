/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 14:43:23 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

using std::cout;
using std::endl;

// Default Constructor
Ice::Ice(void) : AMateria("ice")
{
    cout << "Ice constructor was called" << endl;
}
// Destructor
Ice::~Ice(void)
{
    cout << "Ice was deconstructed" << endl;
}
// Copy Constructor
Ice::Ice(const Ice &Ice) : AMateria(Ice){
     cout << "Ice copy constructor was called" << endl;
}
// Copy Assignment Operator
Ice &Ice::operator=(const Ice &Ice)
{
    cout << "Ice was copied." << endl;
    (void)Ice;
    return *this;
}

// clone function member
Ice		*Ice::clone() const
{
	return (new Ice(*this));
}


void	Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
