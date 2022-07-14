/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 14:44:27 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP_
#define ICE_HPP_


#include "AMateria.hpp"

using std::string;

class Ice : public AMateria						// Concrete Class inherited from Ice
{
	public:
		Ice(void);
		Ice(const Ice &Ice);
		virtual ~Ice();

		Ice	&operator=(const Ice &Ice);
		virtual Ice* clone() const;				// not equal to 0 
		virtual void use(ICharacter &target);
};


#endif
