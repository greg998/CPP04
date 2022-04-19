#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

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

	Animal	&operator=(const Animal &rhs);

	const std::string	&getType() const;

	virtual void	makeSound(void) const;
	virtual void	displayIdeas(void) const;
};

#endif