/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:31:35 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 17:00:58 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const std::string &type) : AMateria(type)
{
	if (this->type != type)
		this->type = type;
}

Cure::Cure(const Cure& other)  : AMateria(other)
{
	this->type = other.type;
}

Cure& Cure::operator=(const Cure& other)
{
		if (this->type != other.type)
			this->type = other.type;
		return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
    std::cout<<"* heals "<<target.getName()<<"'s wounds *"<< std::endl;
}