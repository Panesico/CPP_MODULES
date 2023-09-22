#include "Character.hpp"

Character::Character(std::string const &name)
{
	std::cout << "Character type constructor called" << std::endl;
	_name = name;
}

Character::Character( const Character &Character )
{
	std::cout << "Character copy constructor called" << std::endl;
	_name = Character._name;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = Character._inventory[i].clone();
}

Character::Character()
{
	std::cout << "Character constructor called" << std::endl;
	_type = "Character";
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

Character	&Character::operator=(const Character &copy)
{
	std::cout << "Character copy operator called" << std::endl;
	if ( this != &copy ) {
		this->_name = copy._name;
		for (int i = 0; i < 4; ++i)
			_inventory[i] = Character._inventory[i].clone();
	}
	return *this;
}

const std::string  &Character::getType() const
{
	return _type;
}

Character *Character::clone() const
{
	Character *copy = new Character;
	copy->_type = _type;
	return _type;
}

void Character::use(Character& target)
{
	std::cout << "<Character name" << " heals " << target->_name << "'s wounds"<< std::endl;
}

std::string const &Character::getName() const
{
	return _name;
}
void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break ;
		}
	}
}
void Character::unequip(int idx)
{
	for (int i = 0; i < 100; ++i)
	{
		if (!_floor[i])
		{
			_floor[i] = _inventory[idx];
			break ;
		}
	}
}
void Character::use(int idx, Character& target)
{
	_inventory[idx]->use(target);
}