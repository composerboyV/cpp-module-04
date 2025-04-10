/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:41:12 by junkwak           #+#    #+#             */
/*   Updated: 2025/04/10 10:37:09 by junkwak          ###   ########.fr       */
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
		WrongAnimal(const WrongAnimal& copy_WrongAnimal);//복사생성자
		WrongAnimal& operator=(const WrongAnimal& copy_WrongAnimal);
		virtual ~WrongAnimal();
		void	makeSound() const;
		std::string getType(void) const;


};


#endif
