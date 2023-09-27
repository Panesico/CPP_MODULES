#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::Zombie( std::string name )
{
	Zombie::name = name;
}

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destroying " << name;
	if (name == "")
		std::cout << "MainZombie";
	std::cout << std::endl;
}
