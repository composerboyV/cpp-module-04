/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:41:17 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 10:37:18 by junkwak          ###   ########.fr       */
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
