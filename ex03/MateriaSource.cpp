#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_materiaBook[i] = 0;
}


MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materiaBook[i];
}


MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < 4; ++i)
	{
		delete _materiaBook[i];
		_materiaBook[i] = rhs._materiaBook[i]->clone();
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	if (m)
	{
		int	i(0);

		while (i < 4 && _materiaBook[i] != 0)
			i++;
		if (i < 4)
		{
			_materiaBook[i] = m;
		}
		else
			delete m;
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i (3); i >= 0; --i)
	{
		if (_materiaBook[i] != 0 && _materiaBook[i]->getType() == type)
			return (_materiaBook[i]->clone());
	}
	return (0);
}