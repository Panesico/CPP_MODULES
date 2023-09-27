#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap *pepe = new ScavTrap("pepe");
	ScavTrap *patricio = new ScavTrap("patricio");
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(4);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(6);
	pepe->attack("patricio");
	patricio->takeDamage(20);
	patricio->beRepaired(3);
	patricio->guardGate();
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
	patricio->guardGate();
	delete pepe;
	delete patricio;
}