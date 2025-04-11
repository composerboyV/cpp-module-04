/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:34:34 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/11 21:06:15 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
}

ICharacter::~ICharacter()
{
}
ICharacter::ICharacter(const std::string &type)
{
	if (this->type != type)
		this->type = type;
}
ICharacter& ICharacter::operator=(const ICharacter& other)
{
		if (this->type != other.type)
			this->type = other.type;
		return (*this);
}