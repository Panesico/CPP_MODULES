#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	AMateria *operator=(const AMateria &copy);
	~AMateria();
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
