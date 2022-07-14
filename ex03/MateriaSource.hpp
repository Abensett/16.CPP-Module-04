/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <abensett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:12:15 by abensett          #+#    #+#             */
/*   Updated: 2022/07/14 15:35:27 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource		// concrete class inherited from IMateriaSource
{
	protected:
		AMateria			*_inventory[4];
		
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &materiaSource);
		virtual ~MateriaSource();
		MateriaSource	&operator=(const MateriaSource &materiaSource);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(const std::string &type);
};


#endif
