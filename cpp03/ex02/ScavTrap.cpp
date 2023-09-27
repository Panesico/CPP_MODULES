#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "A ScavTrap was created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	std::cout << "ScavTrap " << _name << " was created!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " was deleted!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
	std::cout << "ScavTrap assignation overload called" << std::endl;
	this->_name = copy._name;
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_hitPoints = copy._hitPoints;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hitPoints && _energyPoints)
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	else if (!_hitPoints)
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " ran out of energy!!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints)
	{
		if (amount < _hitPoints)
			_hitPoints -= amount;
		else
			_hitPoints = 0;
	}
	else
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints && _energyPoints)
	{
		std::cout << "ScavTrap " << _name << " repairs itself for " << amount << " hitpoints!"<< std::endl;
		_hitPoints += amount;
		--_energyPoints;
	}
	else if (!_hitPoints)
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " ran out of energy!!" << std::endl;
}

void ScavTrap::guardGate() {
	if (_hitPoints)
		std::cout << "ScavTrap " << _name << " is guarding the gate!"<< std::endl;
	else
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
}