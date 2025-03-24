#include "WrongCat.hpp"

WrongCat::WrongCat(void) :  W_Animal()
{
	this->type = "WrongCat";
	std::cout << "Wrong Cat created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	if(this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "[Dog] copy_Dog!" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}
WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat closed" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "Animal Sound" << std::endl;
}

