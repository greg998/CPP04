#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type (type)
{

}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
	: type(src.type)
{
	std::cout << "WrongAnimal copy constructor called of type " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	type = rhs.type;
	return (*this);
}

const std::string	&WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "???" << std::endl;
}
