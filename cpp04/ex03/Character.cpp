#include <iostream>
#include "Character.hpp"

Character::Character(std::string const & name)
{
	_name = name;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
		if (!_spells[i])
			return (_spells[i] = m, );
}

void Character::unequip(int idx)
{
	int i = 0;

	while (Character::_floor[i++]);
	Character::_floor[i] = _spells[idx];
	_spells[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (target.getName() == "Ice")
		std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
	else if (target.getName() == "Cure")
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout <<  "Unkown spell" << std::endl;
}