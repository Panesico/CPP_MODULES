#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap *pepe = new DiamondTrap("pepe");
	DiamondTrap *patricio = new DiamondTrap("patricio");
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
	delete pepe;
	delete patricio;
}