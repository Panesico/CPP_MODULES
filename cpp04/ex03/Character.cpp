#include <iostream>
#include "Character.hpp"

Character::Character()
{
	std::cout << "Calling Character constructor" << std::endl;
}

Character::Character(std::string const & name)
{
	_name = name;
}

Character::Character(const Character &copy)
{
	_name = copy._name;
	for (int i = 0; i < 4; ++i)
		_spells[i] = copy._spells[i];
}

Character *Character::operator=(const Character &copy)
{
	std::cout << "Calling Character equal operator" << std::endl;
	Character *character = new Character(copy);
	return character;
}

Character::~Character()
{
	std::cout << "Calling Character destructor" << std::endl;
}

std::string const & Character::getName() const
{
	return _name;
}

std::string const & Character::getSpell(int idx) const
{
	return (_spells[idx]).getType();
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!_spells[i])
		{
			_spells[i] = m;
			return ;
		}
	}
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
	if (getSpell(idx) == "Ice")
		std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
	else if (getSpell(idx) == "Cure")
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout <<  "Unkown spell" << std::endl;
}