#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

class AMateria;
class ICharacter;


class Character
{
protected:
	std::string 	_name;
	AMateria		_spells[4];
	static AMateria	_floor[100];
public:
	Character();
	Character(std::string const & type);
	Character(const Character &copy);
	Character *operator=(const Character &copy);
	~Character();
};

#endif