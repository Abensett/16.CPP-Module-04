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

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>

using std::string;

class Animal  
{
 	public:
		Animal(void);
		~Animal(void);
		explicit Animal(string name);
		Animal(const Animal &Animal);
		Animal &operator=(const Animal &Animal);

		string 	getType(void) const;
		void	set_type(string name);
		virtual void	makeSound(void) const;		// virtual function to be overridden by child classes // non static a la compilation
													// la resolution devient dynamique	= une méthode
	protected:
    	string 	_type;
};

#endif