/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:55:23 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/04 19:57:42 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}


Brain::Brain(const Brain& other)
{
	if (this != &other)
	{
		*this = other;
	}
}
Brain& Brain::operator=(const Brain& other)
{

	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain closed" << std::endl;
}

void	Brain::setidea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getidea(int index) const
{
	if (index >= 0 && index < 100)
		return ideas[index];
	return ideas[index];
}