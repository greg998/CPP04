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
	std::cout << "Ouaaaaffff" << std::endl;
}

void	Dog::fillIdeas(const std::string &s)
{
	for (int i = 0; i < 100; ++i)
		(*_brain)[i] = s;
}

void	Dog::displayIdeas(void) const
{
	if (_brain)
	{
		for (int  i = 0; i < 100; ++i)
			std::cout << (*_brain)[i] << " ";
		std::cout << std::endl;
	}
}

void	Dog::setBrain(int i, const std::string &s)
{
	(*_brain)[i] = s;
}
