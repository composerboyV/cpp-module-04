	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:53:55 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 18:10:26 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class IMateriaSource
{
	protected :
		std::string	type;
	public:
		IMateriaSource();
		virtual ~IMateriaSource();
		IMateriaSource(const std::string &type);
		IMateriaSource& operator=(const IMateriaSource& other);
		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;	
};
