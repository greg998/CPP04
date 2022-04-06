#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string _ideas [100];
public:
	Brain(/* args */);
	Brain(const Brain &src);
	~Brain();

	Brain &operator=(const Brain &rhs);

};

#endif