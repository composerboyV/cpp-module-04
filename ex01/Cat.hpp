/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:47:48 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 14:12:37 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define  CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private :
		Brain* brain;
	public :
    	Cat(void);
		Cat(const Cat& copy_Dog);
		Cat& operator=(const Cat& copy_Dog);
		void	makeSound() const;
    	virtual ~Cat();
		void	Brain_idea(int index, const std::string& idea);
		std::string	getBrain(int index) const;
};

#endif