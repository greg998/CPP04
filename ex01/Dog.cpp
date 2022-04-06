#include "Dog.hpp"

Dog::Dog()
	: Animal ("Dog")
	, _brain (new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
	: Animal (src.type)
	, _brain (new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called of type " << type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}


Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		type = rhs.type;
		delete _brain;
		_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf" << std::endl;
}
