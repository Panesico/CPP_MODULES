#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << *(HumanA::weapon.getType()) << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}