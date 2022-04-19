#include "Dog.hpp"

Dog::Dog()
	: Animal ("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
	: Animal(src.type)
{
	std::cout << "Dog copy constructor called of type " << type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}


Dog	&Dog::operator=(const Dog &rhs)
{
	type = rhs.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaaaaffff" << std::endl;
}
