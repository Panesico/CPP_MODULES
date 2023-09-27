#include "ClapTrap.hpp"

int main()
{
	ClapTrap *pepe = new ClapTrap("pepe");
	ClapTrap *patricio = new ClapTrap("patricio");
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(3);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(3);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(3);
	pepe->attack("patricio");
	patricio->takeDamage(0);
	patricio->beRepaired(4);
	delete pepe;
	delete patricio;
}