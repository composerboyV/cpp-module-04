/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:07:59 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 16:07:48 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(void) : type("")
{}

AMateria::~AMateria()
{}
AMateria::AMateria(std::string const &type)
{

}
AMateria& AMateria::operator=(const AMateria& copy_Dog)
{
	
}


std::string const & AMateria::getType() const
{
	return (this->type);
} //리턴 더 materia 타입.

void	AMateria::use(ICharacter& target)
{
	target;
}