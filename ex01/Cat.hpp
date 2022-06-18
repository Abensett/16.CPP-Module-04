/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"


class Cat  : virtual public Animal
{
 	public:
		Cat(void);
		virtual ~Cat(void);
		explicit Cat(string type);
		Cat(const Cat &Cat);
		Cat &operator=(const Cat &Cat);

		string 	getType(void) const;
		void	set_type(string type);
		virtual void 	makeSound(void) const;	// virtual function to be overridden by child classes // non static
};

#endif
