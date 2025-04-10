/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:40:01 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 10:37:37 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "Wrong Animal Sound" << std::endl;    
}
	
WrongAnimal::WrongAnimal(const WrongAnimal& copy_WrongAnimal)
{
        this->type = copy_WrongAnimal.type;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy_WrongAnimal)
{
    if (this != &copy_WrongAnimal)
    {
        this->type = copy_WrongAnimal.type;
    }
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal is finish." << std::endl;
}

void	WrongAnimal::makeSound() const
{
    std::cout << "Wrong Wrong" << std::endl;
}

std::string    WrongAnimal::getType(void) const
{
    return (this->type);
}
