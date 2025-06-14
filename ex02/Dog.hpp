/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:47:19 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/07 19:40:33 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define	DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain*	brain;
	public:
		Dog(void);
		Dog(const Dog& copy_Dog);
		Dog& operator=(const Dog& copy_Dog);
		virtual void	makeSound() const;
		virtual ~Dog();
		void	Brain_idea(int index, const std::string& idea);
		std::string	getBrain(int index) const;
		
};



#endif
