#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();

	Dog	&operator=(const Dog &rhs);

	void	virtual makeSound(void) const;
};

#endif