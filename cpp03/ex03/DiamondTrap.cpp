#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " created with default constructor." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name){
	ClapTrap::_name = (name + "_clap_name");
	this->_name = name;
	FragTrap::_name = (name);
	ScavTrap::_name = name;
	std::cout << "DiamondTrap " << _name << " was created!" << std::endl;
}
DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " was deleted!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy){
	std::cout << "DiamondTrap assignation overload called" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitPoints = copy._hitPoints;
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	if (FragTrap::_hitPoints && ScavTrap::_energyPoints)
		std::cout << "DiamondTrap " << _name << " attacks " << target << ", causing " << FragTrap::_attackDamage << " points of damage!" << std::endl;
	else if (!FragTrap::_hitPoints)
		std::cout << "DiamondTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "DiamondTrap " << _name << " ran out of energy!!" << std::endl;
}

void DiamondTrap::takeDamage(unsigned int amount)
{
	if (FragTrap::_hitPoints)
	{
		if (amount < FragTrap::_hitPoints)
			FragTrap::_hitPoints -= amount;
		else
			FragTrap::_hitPoints = 0;
	}
	else
		std::cout << "DiamondTrap " << _name << " is already dead!" << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
	if (FragTrap::_hitPoints && ScavTrap::_energyPoints)
	{
		std::cout << "DiamondTrap " << _name << " repairs itself for " << amount << " hitpoints!"<< std::endl;
		FragTrap::_hitPoints += amount;
		--ScavTrap::_energyPoints;
	}
	else if (!FragTrap::_hitPoints)
		std::cout << "DiamondTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "DiamondTrap " << _name << " ran out of energy!!" << std::endl;
}

void DiamondTrap::whoAmI() {
	if (FragTrap::_hitPoints)
	{
		std::cout << " I am DiamondTrap " << ClapTrap::_name << std::endl;
		std::cout << " I am ClapTrap " << _name << std::endl;
	}
	else
		std::cout << "DiamondTrap " << _name << " is already dead!" << std::endl;
}