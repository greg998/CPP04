#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
	: WrongAnimal(src.type)
{
	std::cout << "WrongCat copy constructor called of type " << type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}


WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meowwwwww" << std::endl;
}
