#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name ){
	Zombie *zombie_ptr = new Zombie(name);
	return (zombie_ptr);
}