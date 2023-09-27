#include "Zombie.hpp"

void	ft_leaks()
{
	system("leaks -q a.out");
}

int main()
{
	atexit(ft_leaks);
	std::string str;
	std::cout << "Please, name your zombie > ";
	std::getline(std::cin, str);
	Zombie zombie;
	Zombie *prueba = zombie.zombieHorde(5, str);
	for (int i = 0; i < 5; ++i) {
		prueba[i].announce();
	}
	delete[] prueba;
}