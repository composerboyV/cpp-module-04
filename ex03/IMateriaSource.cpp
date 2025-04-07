/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:53:46 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/04 20:02:20 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
}

IMateriaSource::~IMateriaSource()
{
}

IMateriaSource::IMateriaSource(const std::string &type)
{
	if (this->type != type)
		this->type = type;
	
}
IMateriaSource& IMateriaSource::operator=(const IMateriaSource& other)
{
	if (this->type != other.type)
		this->type = other.type;
	return (*this);
}