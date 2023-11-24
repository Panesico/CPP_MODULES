#include <iostream>

class	Zombie{
private:
	std::string name;
public:
	void announce( void );
	Zombie* newZombie( std::string name );
	Zombie* zombieHorde( int N, std::string name );

	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );
};