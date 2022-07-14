/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/13 22:35:59 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : public ICharacter
{
	protected :
		AMateria	*_inventory[4];
		AMateria	*_on_the_floor[100];
		string 		_name;

	public:
		Character(void);
		Character(const std::string &name);
		Character(const Character &character);
		virtual ~Character();
		Character	&operator=(const Character &character);

		const 		std::string  &getName() const;
		void 		equip(AMateria* m) ;
		void 		unequip(int idx);
		void 		use(int idx, ICharacter& target) ;
};



#endif
