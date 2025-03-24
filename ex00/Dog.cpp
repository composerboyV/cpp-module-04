/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:48:38 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/11 10:00:06 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Dog";
	std::cout << "[Dog] Dog created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] closed" << std::endl;
}

Dog::Dog(const Dog& copy_Dog) : Animal(copy_Dog)
{
	if(this != &copy_Dog)
	{
		this->type = copy_Dog.type;
	}
	std::cout << "[Dog] copy_Dog!" << std::endl;
}

Dog&	Dog::operator=(const Dog& copy_Dog)
{
	if (this != &copy_Dog)
	{
		Animal::operator=(copy_Dog);
		this->type = copy_Dog.type;
	}
	std::cout << "[Dog] Copy_dog!" << std::endl;
	return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Wal Wal!" << std::endl;
}