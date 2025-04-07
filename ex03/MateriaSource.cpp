/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/07 17:17:46 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for(int i = 0; i < 4; i++)
		this->temp[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i < 4; i++) {
		if (this->temp[i] != NULL) {
				delete this->temp[i];
				this->temp[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource()
{
    this->type = other.type;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->temp[i] != NULL)
			{
				delete this->temp[i];
				this->temp[i] = NULL;
			}
		}	
		this->type = other.type;
		for(int i = 0; i < 4; i++)
		{
			if (other.temp[i] != NULL) {
				this->temp[i] = other.temp[i]->clone();
			}
			else
				this->temp[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->temp[i] == NULL)
		{
			this->temp[i] = m->clone();
			delete m;
			return ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	static int	i;
	if (this->temp[i] == NULL)
		return NULL;
	if  ((i >= 0 && i < 4) && this->temp[i]->getType() == type) {
			AMateria* temp = this->temp[i]->clone();
			i++;
			return temp;
	}
	return NULL;
}
