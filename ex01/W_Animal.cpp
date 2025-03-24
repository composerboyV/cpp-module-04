#include "W_Animal.hpp"

W_Animal::W_Animal(void)
{
    std::cout << "Wrong Animal Sound" << std::endl;    
}
	
W_Animal::W_Animal(const W_Animal& copy_W_Animal)
{
        this->type = copy_W_Animal.type;
}
W_Animal& W_Animal::operator=(const W_Animal& copy_W_Animal)
{
    if (this != &copy_W_Animal)
    {
        this->type = copy_W_Animal.type;
    }
    return (*this);
}
W_Animal::~W_Animal()
{
    std::cout << "Wrong Animal is finish." << std::endl;
}

void	W_Animal::makeSound() const
{
    std::cout << "Wrong Wrong" << std::endl;
}

std::string    W_Animal::getType(void) const
{
    return (this->type);
}