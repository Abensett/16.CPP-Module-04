/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 17:34:37 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat  :  public WrongAnimal
{
 	public:
		WrongCat(void);
		~WrongCat(void);
		explicit WrongCat(string type);
		WrongCat(const WrongCat &WrongCat);
		WrongCat &operator=(const WrongCat &WrongCat);

		string 	getType(void) const;
		void	set_type(string type);
		void 	makeSound(void) const;	// virtual function to be overridden by child classes // non static
};

#endif
