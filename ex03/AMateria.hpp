/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:08:15 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 16:48:35 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define	AMATERIA_HPP


#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected :
		std::string type;
	public:
		AMateria(void);
		virtual ~AMateria();
		AMateria(std::string const &type);
		AMateria& operator=(const AMateria& other);
		std::string const & getType() const; //리턴 더 materia 타입.
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif