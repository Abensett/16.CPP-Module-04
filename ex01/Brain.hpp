/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/06/16 02:02:26 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP_
#define BRAIN_HPP_

#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;

class Brain
{
 	public:
		Brain(void);
		virtual ~Brain(void);						// utile pour delete
		Brain(const Brain &Brain);
		Brain &operator=(const Brain &Brain);
		void printFirstIdeas(void) const;

	protected:
    	string 	_ideas[100];
};

#endif
