#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(const std::string &_name);
	~ScavTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
	ScavTrap	&operator=(const ScavTrap &copy);
};

#endif