/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 18:40:44 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

using std::string;
class ICharacter;

class AMateria								// Abstract Class so not instanciable
{
	protected:
		string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &AMateria);
		virtual ~AMateria();

		AMateria	&operator=(const AMateria &AMateria);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;		// this makes the class -> Abstract
		virtual void use(ICharacter& target);
};


#endif
