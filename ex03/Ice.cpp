/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:08:47 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 21:06:27 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const std::string &type) : AMateria(type)
{
		if (this->type != type)
			this->type = type;
}
Ice::Ice(const Ice& other)  : AMateria(other)
{
	this->type = other.type;
}
Ice& Ice::operator=(const Ice& other)
{
		if (this->type != other.type)
			this->type = other.type;
		return (*this);
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}
void	Ice::use(ICharacter& target)
{
	std::cout<< "* shoots an ice bolt at " << target.getName()<<" *"<< std::endl;
}