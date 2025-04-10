/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:40:04 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 14:12:20 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define    WRONGANIMAL_HPP

#include "Animal.hpp"

class   WrongAnimal   {
    protected :
        std::string type;
    public :
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& copy_WrongAnimal);
		WrongAnimal& operator=(const WrongAnimal& copy_WrongAnimal);
		virtual ~WrongAnimal();
		void	makeSound() const;
		std::string getType(void) const;


};


#endif
