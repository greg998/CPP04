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
	~Animal();

	Animal	&operator=(const Animal &rhs);

	const std::string	&getType() const;

	void	virtual makeSound(void) const;
};

#endif