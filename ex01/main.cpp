#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{	
	const Animal	*animals[10];

	for (int i = 0; i < 5; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = 0; i < 5; ++i)
		animals[5 + i] = new Cat();

	for (int i = 0; i < 10; ++i)
	{
		animals[i]->makeSound();
	}

	animals[0]->displayIdeas();
	const Dog *dog = static_cast<const Dog *>(animals[0]);
	Dog *dog1 = new Dog(*dog); //deep copy
	dog1->setBrain(0, "HERE DOG");

	dog1->displayIdeas();
	std::cout << std::endl;
	dog->displayIdeas();


	delete dog1;
	for (int i = 0; i < 10; ++i)
		delete animals[i];
}