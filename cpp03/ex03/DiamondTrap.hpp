#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(const std::string &_name);
	~DiamondTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void whoAmI();
	DiamondTrap	&operator=(const DiamondTrap &copy);
};

#endif