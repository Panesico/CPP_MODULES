#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap *pepe = new FragTrap("pepe");
	FragTrap *patricio = new FragTrap("patricio");
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(3);
	patricio->HighFivesGuys();
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(3);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(3);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	patricio->HighFivesGuys();
	delete pepe;
	delete patricio;
}