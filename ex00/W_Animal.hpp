/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   W_Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:40:04 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/07 19:40:05 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef W_ANIMAL_HPP
# define    W_ANIMAL_HPP

#include "Animal.hpp"

class   W_Animal   {
    protected :
        std::string type;
    public :
		W_Animal(void);
		W_Animal(const W_Animal& copy_W_Animal);//복사생성자
		W_Animal& operator=(const W_Animal& copy_W_Animal);
		virtual ~W_Animal();
		void	makeSound() const;
		std::string getType(void) const;


};


#endif
