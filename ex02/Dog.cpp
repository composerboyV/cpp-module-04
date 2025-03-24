/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:48:38 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/11 20:11:23 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "[Dog] Dog created" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "[Dog] closed" << std::endl;
}

Dog::Dog(const Dog& copy_Dog) : Animal(copy_Dog)
{
	if(this != &copy_Dog)
	{
		this->type = copy_Dog.type;
	}
	this->brain = new Brain(*(copy_Dog.brain));
	std::cout << "[Dog] copy_Dog!" << std::endl;
}

Dog&	Dog::operator=(const Dog& copy_Dog)
{
	if (this != &copy_Dog)
	{
		Animal::operator=(copy_Dog);
		delete this->brain;
		this->brain = new Brain(*(copy_Dog.brain));
		this->type = copy_Dog.type;
	}
	std::cout << "[Dog] Copy_dog!" << std::endl;
	return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Wal Wal!" << std::endl;
}

void	Dog::Brain_idea(int index, const std::string& idea)
{
	brain->setidea(index, idea);
}

std::string Dog::getBrain(int index) const
{
	return brain->getidea(index);
}