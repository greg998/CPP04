#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
private:
	/* data */
public:
	Cure();
	Cure(const Cure &src);
	~Cure();

	Cure	&operator=(const Cure &rhs);

	virtual AMateria	*clone() const;
	virtual void		use(ICharacter& target);
};

#endif