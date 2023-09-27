#include "../ex01/Zombie.hpp"

void	ft_leaks()
{
	system("leaks -q a.out");
}

int main()
{
	atexit(ft_leaks);
	std::string pepito = "MainZombie";
	Zombie prueba(pepito);
	std::string str;
	std::cout << "Please, name your zombie > ";
	std::getline(std::cin, str);
	prueba.randomChump(str);
}