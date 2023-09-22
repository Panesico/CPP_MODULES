#include <iostream>

#ifndef ICharacter_HPP
# define ICharacter_HPP

# include "ICharacter.hpp"

class AMateria;

class Character : virtual public ICharacter
{
protected:
	std::string _name;
	AMateria	_inventory[4];
	AMateria	_floor[100];
public:
	Character(std::string const & name);
	Character( const AMateria &aMateria );
	virtual ~Character();
	Character	&operator=(const Character &copy);

};

#endif