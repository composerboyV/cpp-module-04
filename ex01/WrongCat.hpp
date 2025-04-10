/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:39:41 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 14:13:16 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define	WRONGCAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "WrongAnimal.hpp"

class WrongCat	: public WrongAnimal {
	public :
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat& operator=(const WrongCat &other);
		~WrongCat();
		void    makeSound() const;
};


#endif
