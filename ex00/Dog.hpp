/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:47:19 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/11 10:00:06 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define	DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const Dog& copy_Dog);//복사생성자
		Dog& operator=(const Dog& copy_Dog);
		void	makeSound() const;
		virtual ~Dog();
};



#endif