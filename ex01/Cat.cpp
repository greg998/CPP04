#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
	, _brain (new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
	: Animal(src.type)
	, _brain (new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called of type " << type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}


Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		type = rhs.type;
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
