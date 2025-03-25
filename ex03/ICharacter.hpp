/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:34:29 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 16:48:47 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICHARACTER_HPP
# define	ICHARACTER_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	protected :
		std::string type;
	public:
		ICharacter(void);
		virtual ~ICharacter();
		ICharacter(const std::string &type);
		ICharacter& operator=(const ICharacter& other);
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif