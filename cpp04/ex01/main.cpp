#include <iostream>
#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "brain.hpp"

void	ft_leaks()
{
	system("leaks -q a.out");
}

int main()
{
	atexit(ft_leaks);
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return 0;
}