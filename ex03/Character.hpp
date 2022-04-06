#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character: public ICharacter
{
private:
	std::string	_name;
	AMateria	*_inventory[4];

public:
	Character();
	Character(const Character &src);
	Character(std::string name);
	virtual ~Character();

	Character &operator=(const Character &rhs);

	virtual std::string const &getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif