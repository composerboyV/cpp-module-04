/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:42:54 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 14:12:27 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define  ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected :
		std::string type;
	public:
		Animal(void);
		Animal(const Animal& copy_Animal);
		Animal& operator=(const Animal& copy_Animal);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string getType(void) const;
};


#endif