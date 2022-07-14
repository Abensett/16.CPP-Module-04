/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 14:44:27 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP_
#define CURE_HPP_


#include "AMateria.hpp"

using std::string;

class Cure : public AMateria						// Concrete Class inherited from Cure
{
	public:
		Cure(void);
		Cure(const Cure &Cure);
		virtual ~Cure();

		Cure	&operator=(const Cure &Cure);
		virtual Cure* clone() const;				// not equal to 0 
		virtual void use(ICharacter &target);
};


#endif
