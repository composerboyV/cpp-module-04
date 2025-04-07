/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:40:09 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/07 19:40:10 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
# define	WRONGCAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "W_Animal.hpp"

class WrongCat	: public W_Animal {
	public :
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		WrongCat& operator=(const WrongCat &other);
		~WrongCat();
		void    makeSound() const;
};


#endif
