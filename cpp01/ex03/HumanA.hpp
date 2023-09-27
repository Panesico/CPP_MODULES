#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon &weapon;
public:
	void attack() const;
	HumanA(std::string name, Weapon &weapon);
};
