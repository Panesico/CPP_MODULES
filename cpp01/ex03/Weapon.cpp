#include "Weapon.hpp"

const std::string	*Weapon::getType() const
{
	return (&type);
}

void	Weapon::setType(std::string str)
{
	type = str;
}

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	Weapon::type = type;
}