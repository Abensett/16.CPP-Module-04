/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP_
#define DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : virtual public Animal
{
 	public:
		Dog(void);
		virtual ~Dog(void);
		explicit Dog(string type);
		Dog(const Dog &Dog);
		Dog &operator=(const Dog &Dog);

		string 	getType(void) const;
		void	set_type(string type);
		virtual void 	makeSound(void) const;	// virtual function to be overridden by child classes // non static
		void			showIdeas(void) const;	// print first ideas

	private:
		Brain	*_Brain;
};

#endif
