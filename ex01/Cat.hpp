#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*_brain;

public:
	Cat();
	Cat(const Cat &src);
	virtual ~Cat();

	virtual Cat	&operator=(const Cat &rhs);
	virtual Animal	&operator=(const Animal &rhs);

	virtual void	makeSound(void) const;
			void	fillIdeas(const std::string &s);
	virtual	void	displayIdeas(void) const;
			void	setBrain(int i, const std::string &s);
	virtual Brain	*getBrain(void) const;
};

#endif