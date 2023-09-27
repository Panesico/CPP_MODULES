#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "MateriaSource.hpp"
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : virtual public ICharacter
{
protected:
	std::string 	_name;
	AMateria		_spells[4];
	static AMateria	_floor[100];
public:
	Character();
	Character(std::string const & name);
	Character(const Character &copy);
	Character *operator=(const Character &copy);
	~Character();
	std::string const & getName() const;
	std::string const & getSpell(int idx) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif