/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaContainer.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:52:41 by sejjeong          #+#    #+#             */
/*   Updated: 2025/04/10 14:17:04 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaContainer.hpp"

MateriaContainer::MateriaContainer()
{
    initMateriaContainer();
}

MateriaContainer::MateriaContainer(const MateriaContainer& other)
{
    initMateriaContainer();
    *this = other;
}

MateriaContainer& MateriaContainer::operator=(const MateriaContainer& rhs)
{
    clearMateriaContainer();
    for (int i = 0; i < CONTAINER_SIZE; ++i)
    {
        if (rhs.mMateriaContainer[i] != 0)
        {
            mMateriaContainer[i] = rhs.mMateriaContainer[i]->clone();
        }
    }
    return *this;
}

MateriaContainer::~MateriaContainer()
{
    clearMateriaContainer();
}

AMateria* MateriaContainer::getMateria(int index)
{
    if (index < 0 || index >= CONTAINER_SIZE)
    {
        return 0;
    }
    return mMateriaContainer[index];
}

AMateria* MateriaContainer::getMateria(const std::string type)
{
    for (int i = 0; i < CONTAINER_SIZE; ++i)
    {
        if (mMateriaContainer[i] == 0)
        {
            continue;
        }
        if (mMateriaContainer[i]->getType() == type)
        {
            return mMateriaContainer[i];
        }
    }
    return 0;
}

bool MateriaContainer::add(AMateria* m)
{
    for (int i = 0; i < CONTAINER_SIZE; ++i)
    {
        if (mMateriaContainer[i] == 0)
        {
            mMateriaContainer[i] = m;
            return true;
        }
    }
    return false;
}

AMateria* MateriaContainer::remove(int index)
{
    if (CONTAINER_SIZE <= index || index < 0)
    {
        return 0;
    }
    AMateria* trash = mMateriaContainer[index];
    mMateriaContainer[index] = 0;
    return trash;
}

void MateriaContainer::initMateriaContainer()
{
    for (int i = 0; i < CONTAINER_SIZE; ++i)
    {
        mMateriaContainer[i] = 0;
    }
}

void MateriaContainer::clearMateriaContainer()
{
    for (int i = 0; i < CONTAINER_SIZE; ++i)
    {
        if (mMateriaContainer[i] != 0)
        {
            delete mMateriaContainer[i];
        }
        mMateriaContainer[i] = 0;
    }
}