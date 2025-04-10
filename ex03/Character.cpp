/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:07:06 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 13:36:57 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
	this->type = name;
	for (int i = 0; i < 4; i++) {
		this->inven[i] = NULL;
		this->Incinerator[i] = NULL;
	}
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		delete this->inven[i];
		delete this->Incinerator[i];
			this->inven[i] = NULL;
			this->Incinerator[i] = NULL;
	}
}

Character::Character(const Character& other)  : ICharacter()
{
    this->type = other.type;
    for (int i = 0; i < 4; i++) {
        this->inven[i] = NULL;
		this->Incinerator[i] = NULL;
	}
    for (int i = 0; i < 4; i++) {
        if (other.inven[i] != NULL) {
            this->inven[i] = other.inven[i]->clone();
        }
		if (other.Incinerator[i] != NULL) {
			this->Incinerator[i] = other.Incinerator[i]->clone();
		}
    }
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inven[i] != NULL)
			{
				delete this->inven[i];
				this->inven[i] = NULL;
			}
		}	
		this->type = other.type;
		for(int i = 0; i < 4; i++)
		{
			if (other.inven[i] != NULL) {
				this->inven[i] = other.inven[i]->clone();
			}
			if(other.Incinerator[i] != NULL)
				this->Incinerator[i] = other.Incinerator[i]->clone();
		}
	}
	return (*this);
}

void	Character::equip(AMateria* m)
{

    if (m == NULL)
        return;
    for (int n= 0; n < 4; n++) {
        if (this->inven[n] == NULL) {
            this->inven[n] = m->clone();
    		delete m;
            return; 
        }
    }
}
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->inven[idx] != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if (Incinerator[i] == NULL) {
				Incinerator[i] = inven[idx];
				this->inven[idx] = NULL;
				return ;
			}
		}
		std::cout<<"Incinerator Full" <<std::endl;
	}
}
void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4) {
		if (this->inven[idx] != NULL) {
			this->inven[idx]->use(target);
		}
	}
}

std::string const & Character::getName() const
{
	return (this->type);
}
