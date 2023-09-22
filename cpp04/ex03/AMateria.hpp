#include <iostream>

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria( const AMateria &aMateria );
	AMateria();
	virtual ~AMateria();
	AMateria	&operator=(const AMateria &copy);
	std::string  &getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif