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

	virtual void	makeSound(void) const;
	virtual void	displayIdeas(void) const;
	virtual void	setBrain(int i, const std::string &s);
	virtual Brain	*getBrain(void) const;
};

#endif