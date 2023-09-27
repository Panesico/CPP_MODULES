#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack() const
{
	std::cout << name << " attacks with their " << *(HumanB::weapon->getType()) << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	HumanB::name = name;
}
