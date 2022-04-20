#include "Cure.hpp"

Cure::Cure()
	: AMateria ("cure")
{

}

Cure::Cure(const Cure &src)
	: AMateria (src._type)
{

}

Cure::~Cure()
{

}

Cure	&Cure::operator=(const Cure &rhs)
{
	_type = rhs._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}