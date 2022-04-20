#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
	, _brain (new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	fillIdeas("fish");
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
		*(_brain) = *(rhs._brain);
	}
	return (*this);
}

Animal	&Cat::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		type = rhs.getType();
		if (rhs.getBrain())
			*(_brain) = *(rhs.getBrain());
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwwww" << std::endl;
}

void	Cat::fillIdeas(const std::string &s)
{
	for (int i = 0; i < 100; ++i)
		(*_brain)[i] = s;
}

void	Cat::displayIdeas(void) const
{
	if (_brain)
	{
		for (int  i = 0; i < 100; ++i)
			std::cout << (*_brain)[i] << " ";
		std::cout << std::endl;
	}
}

void	Cat::setBrain(int i, const std::string &s)
{
	if (i >= 0 && i < 100)
		(*_brain)[i] = s;
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}
