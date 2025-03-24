/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:47:48 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/06 08:48:55 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define  CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public :
    	Cat(void);
		Cat(const Cat& copy_Dog);//복사생성자
		Cat& operator=(const Cat& copy_Dog);
		void	makeSound() const;
    	virtual ~Cat();
};

#endif