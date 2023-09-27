#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "A ClapTrap was created!" << std::endl;
	this->_name = "";
	this->_attackDamage = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
}
ClapTrap::ClapTrap(const std::string &name) : _name(name) {
	std::cout << "ClapTrap " << _name << " was created!" << std::endl;
	this->_hitPoints = 10;
	this->_attackDamage = 0;
	this->_energyPoints = 10;
}
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " was deleted!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "ClapTrap assignation overload called" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitPoints = copy._hitPoints;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	else if (!_hitPoints)
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " ran out of energy!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
	{
		if (amount < _hitPoints)
			_hitPoints -= amount;
		else
			_hitPoints = 0;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hitpoints!"<< std::endl;
		_hitPoints += amount;
		--_energyPoints;
	}
	else if (!_hitPoints)
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " ran out of energy!!" << std::endl;
}