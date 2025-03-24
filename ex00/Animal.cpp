/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:43:47 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 14:30:08 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal(void)
{
    std::cout << "[Aniaml] Create" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[Aniaml] closed" << std::endl;
}

Animal::Animal(const Animal& copy_Animal)
{
    if (this != &copy_Animal)
    {
        this->type = copy_Animal.type;
    }
    std::cout << "Animal copy_Animal" << this->getType() << "copy that" << std::endl;
}


Animal& Animal::operator=(const Animal& copy_Animal)
{
    if (this != &copy_Animal)
    {
        this->type = copy_Animal.type;
    }
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->type);    
}

void    Animal::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}