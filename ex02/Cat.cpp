/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:48:22 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/24 18:35:45 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "[cat] created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[cat] closed" << std::endl;
}

Cat::Cat(const Cat& copy_Cat) : Animal(copy_Cat)//복사생성자
{
	this->type = copy_Cat.type;
	std::cout << "[Cat] Copy !" << std::endl;
}
Cat&	Cat::operator=(const Cat& copy_Cat)
{
	if (this != &copy_Cat) {
		Animal::operator=(copy_Cat);
		this->type = copy_Cat.type;
	}
	std::cout << "[Cat] Copy_cat!" << std::endl;
	return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow" << std::endl;
}

void	Cat::Brain_idea(int index, const std::string& idea)
{
	brain->setidea(index, idea);
}


std::string Cat::getBrain(int index) const
{
	return brain->getidea(index);
}