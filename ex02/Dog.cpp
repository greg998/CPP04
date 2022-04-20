#include "Dog.hpp"

Dog::Dog()
	: Animal ("Dog")
	, _brain (new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	fillIdeas("bones");
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
		*(_brain) = *(rhs._brain);
	}
	return (*this);
}

Animal	&Dog::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		type = rhs.getType();
		if (rhs.getBrain())
			*(_brain) = *(rhs.getBrain());
	}
	return (*this);
}


void	Dog::makeSound(void) const
{
	std::cout << "Wouf wouf" << std::endl;
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
	if (i >= 0 && i < 100)
		(*_brain)[i] = s;
}

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}