#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
	: Animal(src.type)
{
	std::cout << "Cat copy constructor called of type " << type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}


Cat	&Cat::operator=(const Cat &rhs)
{
	type = rhs.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwwww" << std::endl;
}
