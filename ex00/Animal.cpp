#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
	: type (type)
{

}

Animal::Animal(const Animal &src)
	: type(src.type)
{
	std::cout << "Animal copy constructor called of type " << type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


Animal	&Animal::operator=(const Animal &rhs)
{
	type = rhs.type;
	return (*this);
}

const std::string	&Animal::getType() const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "???" << std::endl;
}
