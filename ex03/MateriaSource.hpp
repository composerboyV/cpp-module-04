/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:57:02 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 10:58:18 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	temp[4];
		int count;
	public:
		MateriaSource(void);
		~MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		void	learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
		

#endif
