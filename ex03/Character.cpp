#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = 0;
}

Character::Character(std::string name)
	: _name (name)
{
	for (int i = 0; i < 4; ++i)
		_inventory[i] = 0;
}

Character::Character(const Character &src)
	: _name (src._name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (src._inventory[i] != 0)
		{
			delete _inventory[i];
			_inventory[i] = src._inventory[i]->clone();
		}
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}


Character &Character::operator=(const Character &rhs)
{
	_name = rhs._name;
	for (int i = 0; i < 4; ++i)
	{
		if (rhs._inventory[i] != 0)
		{
			delete _inventory[i];
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	int	i (0);

	while (i < 4 &&_inventory[i] != 0)
		i++;
	if (i < 4)
		_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != 0)
		_inventory[idx]->AMateria::use(target);
}
