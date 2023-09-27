#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "A FragTrap was created!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}
FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " was deleted!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
	std::cout << "FragTrap assignation overload called" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitPoints = copy._hitPoints;
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	else if (!_hitPoints)
		std::cout << "FragTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "FragTrap " << _name << " ran out of energy!!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
	{
		if (amount < _hitPoints)
			_hitPoints -= amount;
		else
			_hitPoints = 0;
	}
	else
		std::cout << "FragTrap " << _name << " is already dead!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "FragTrap " << _name << " repairs itself for " << amount << " hitpoints!"<< std::endl;
		_hitPoints += amount;
		--_energyPoints;
	}
	else if (!_hitPoints)
		std::cout << "FragTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "FragTrap " << _name << " ran out of energy!!" << std::endl;
}

void FragTrap::HighFivesGuys() {
	if (_hitPoints)
		std::cout << "FragTrap " << _name << " High Fives!"<< std::endl;
	else
		std::cout << "FragTrap " << _name << " is already dead!" << std::endl;
}