/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:07:59 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 13:56:41 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(void) 
{}

AMateria::~AMateria()
{
}
AMateria::AMateria(std::string const &type) : type(type)
{
}
AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}


std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout<<"* maybe not init materia not use for "<<target.getName()<< std::endl;
}
