#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	std::cout << "-------" << std::endl;
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *wrongcat = new WrongCat();
		std::cout << wrongcat->getType() << " " << std::endl;
		wrongcat->makeSound(); // will output the wrong animal sound!
		meta->makeSound();

		delete meta;
		delete wrongcat;
	}
	return (0);
}