/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:10:35 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 03:20:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

using std::cout;
using std::endl;

// Default Constructor
Brain::Brain(void) {
    cout << "Brain constructor was called" << endl;
    for (int i =  0; i < 100; i++)
    		_ideas[i] = "Ramdom idea "  + std::to_string(rand() % 100);
}

// Destructor
Brain::~Brain(void) {
    cout << "Brain was deconstructed" << endl;
}

// Copy Constructor
Brain::Brain(const Brain &Brain) {
    for ( int i = 0; i < 100; i++)
           _ideas[i] = Brain._ideas[i];
    *this = Brain;
}

// Copy Assignment Operator
Brain &Brain::operator=(const Brain &Brain) {
    cout << "Brain ideas were copied" << endl;

    if (this != &Brain) {
        for ( int i = 0; i < 100; i++)
           _ideas[i] = Brain._ideas[i];
    }
    return *this;
}
void Brain::printFirstIdeas(void) {
    cout << "IDEAS :" << _ideas[0] << "," << _ideas[1] << "," << _ideas[2] << "," << _ideas[3] << "," << _ideas[4] << endl;
}

