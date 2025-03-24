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