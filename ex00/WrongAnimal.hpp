#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
	/* data */
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &src);
	~WrongAnimal();

	WrongAnimal	&operator=(const WrongAnimal &rhs);

	const std::string	&getType() const;

	void	makeSound(void) const;
};

#endif