/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:08:15 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 16:11:10 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


class ICharacter;

class AMateria
{
	protected :
		std::string type;
	public:
		AMateria(void);
		~AMateria();
		AMateria(std::string const &type);
		AMateria& operator=(const AMateria& copy_Dog);
		std::string const & getType() const; //리턴 더 materia 타입.
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

AMateria::AMateria(/* args */)
{
}

AMateria::~AMateria()
{
}
