#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "---------" << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());


		ICharacter *me = new Character("me");

		AMateria *ice1;
		ice1 = src->createMateria("ice");
		me->equip(ice1);
		AMateria *cure1;
		cure1 = src->createMateria("cure");
		me->equip(cure1);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		ICharacter *charles = new Character("Charles");

		charles->equip(ice1);
		charles->equip(cure1);
		charles->equip(src->createMateria("notexist"));
		charles->equip(src->createMateria("ice"));
		charles->equip(src->createMateria("cure"));
		AMateria *cure2;
		cure2 = src->createMateria("cure");
		charles->equip(cure2);


		*charles = *me;
		me->unequip(0);
		me->unequip(1);

		me->use(0, *bob); //me inventory empty = print nothing
		charles->use(0, *me);
		charles->use(1, *me);
		charles->use(2, *me);
		charles->use(3, *me);
		charles->use(4, *me); // bad index print nothing


		delete cure2;
		delete charles;
		delete bob;
		delete me;
		delete src;
	}
	return 0;
}