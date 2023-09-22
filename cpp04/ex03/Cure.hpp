#include <iostream>

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
private:
	std::string _type;
public:
	Cure(std::string const & type);
	Cure( const AMateria &aMateria );
	Cure();
	virtual ~Cure();
	Cure	&operator=(const Cure &copy);
	const std::string  &getType() const; //Returns the materia type
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif