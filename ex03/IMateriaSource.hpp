/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 15:35:27 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP_
#define IMATERIASOURCE_HPP_

# include "AMateria.hpp"

class IMateriaSource			// Interface IMateriaSource = ALL THE MEMBER FUNCTIONS GOTTA BE IMPLEMENTED
{
	public:
		virtual				~IMateriaSource() {}
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(const std::string &type) = 0;
};

#endif
