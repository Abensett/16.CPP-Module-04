/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>
#include <string>

using std::string;

class WrongAnimal
{
 	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		explicit WrongAnimal(string type);
		WrongAnimal(const WrongAnimal &WrongAnimal);
		WrongAnimal &operator=(const WrongAnimal &WrongAnimal);

		string 	getType(void) const;
		void	set_type(string type);
		void	makeSound(void) const;		// virtual function to be overridden by child classes // non static a la compilation
											// la resolution devient dynamique	= une méthode
	protected:
    	string 	_type;
};

#endif
