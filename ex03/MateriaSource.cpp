/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 14:00:38 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cassert>
#include "MateriaSource.hpp"


MateriaSource::MateriaSource(void) : IMateriaSource(), count(0)
{
	for(int i = 0; i < 4; i++)
		this->temp[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->temp[i] != NULL) 
		{
			delete this->temp[i];
			this->temp[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource()
{
    this->type = other.type;
	this->count = 0;
	for(int i = 0; i < 4; i++)
		this->temp[i] = NULL;
	for(int i = 0; i < 4; i++)
	{
		if (other.temp[i] != NULL)
			{
				this->temp[i] = other.temp[i]->clone();
				this->count++;
			}
	}
}


MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	this->type = other.type;
	for (int i = 0; i < count; ++i)
	{
		assert(temp[i] != NULL);
		delete this->temp[i];
		this->temp[i] = NULL;
	}

	assert(other.count <= 4);
	this->count = other.count;
	for (int i = 0; i < count; ++i)
	{
		this->temp[i] = other.temp[i]->clone();
	}

	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
	{
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->temp[i] == NULL)
		{
			this->temp[i] = m->clone();
			++count;
			delete m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < count; ++i)
	{
		assert(temp[i] != NULL);
		if (this->temp[i]->getType() == type)
		{
			AMateria* temp = this->temp[i]->clone();
			return temp;
		}
	}
	return NULL;
}
