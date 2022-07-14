/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 14:43:23 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

using std::cout;
using std::endl;

// Default Constructor
Cure::Cure(void) : AMateria("cure") 
{
    cout << "Cure constructor was called" << endl;
}
// Destructor
Cure::~Cure(void)
{
    cout << "Cure was deconstructed" << endl;
}
// Copy Constructor
Cure::Cure(const Cure &Cure) : AMateria(Cure){
    cout << "Cure copy constructor was called" << endl;
    *this = Cure;
}
// Copy Assignment Operator
Cure &Cure::operator=(const Cure &Cure) 
{
    cout << "Cure was copied" << endl;
    (void)Cure;
    return *this;
}

// clone function member
Cure		*Cure::clone() const
{
	return (new Cure(*this));
}


void	Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
