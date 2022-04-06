#include "Ice.hpp"

Ice::Ice()
	: AMateria ("ice")
{

}

Ice::Ice(const Ice &src)
	: AMateria (src._type)
{

}

Ice::~Ice()
{

}

Ice	&Ice::operator=(const Ice &rhs)
{
	_type = rhs._type;
	return (*this);
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}