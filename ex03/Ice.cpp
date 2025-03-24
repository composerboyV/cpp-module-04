/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:08:47 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 16:24:44 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria() , type("")
{
}

Ice::~Ice()
{
}

Ice::Ice(const std::string &type) : AMateria()
{
	
}
Ice& Ice::operator=(const Ice& copy_Dog)
{}

AMateria* AMateria::clone() const
{}
