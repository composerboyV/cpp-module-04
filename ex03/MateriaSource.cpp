/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:56:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/25 17:24:42 by junkwak          ###   ########.fr       */
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
    for (int i = 0; i < 4; i++)
        this->temp[i] = NULL;
    for (int i = 0; i < 4; i++) {
        if (other.temp[i] != NULL) {
            this->temp[i] = other.temp[i]->clone();
        }
    }
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
			this->temp[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int	i = 0;
	for(; i < 4; i++) {
		if  (this->temp[i] != NULL && this->temp[i]->getType() == type) {
			return this->temp[i]->clone();
		}
	}
	return NULL;
}
