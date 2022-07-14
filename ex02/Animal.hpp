/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP_
#define Animal_HPP_

#include <iostream>
#include <string>

using std::string;

class Animal										// Abstract Class
{
 	public:
		Animal(void);
		virtual ~Animal(void);						// utile pour delete
		explicit Animal(string name);
		Animal(const Animal &Animal);
		Animal &operator=(const Animal &Animal);

		string 	getType(void) const;
		void	set_type(string name);
		virtual void	makeSound(void) const = 0;		// = 0 donc la methode n'a pas de definition => Donc la classe n'est pas instanciable -> Abstract Class
													// la resolution devient dynamique	= une méthode
	protected:
    	string 	_type;
};

#endif
