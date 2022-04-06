#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*_brain;

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();

	Dog	&operator=(const Dog &rhs);

	virtual void	makeSound(void) const;
};

#endif