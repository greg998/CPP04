#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string	type;
	/* data */
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &src);
	virtual ~Animal();

	virtual Animal	&operator=(const Animal &rhs);

	const std::string	&getType() const;

	virtual void	makeSound(void) const = 0;
	virtual void	displayIdeas(void) const = 0;
	virtual void	setBrain(int i, const std::string &s) = 0;
	virtual Brain	*getBrain(void) const = 0;
};

#endif