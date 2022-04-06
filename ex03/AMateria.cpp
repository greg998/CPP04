#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(const AMateria &src)
	: _type (src._type)
{

}

AMateria::AMateria(std::string const &type)
	: _type (type)
{
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	_type = rhs._type;
	return (*this);
}

std::string const &	AMateria::getType() const
{
	return (_type);
}

void		AMateria::use(ICharacter& target)
{
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}