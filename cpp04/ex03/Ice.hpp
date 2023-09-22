#include <iostream>

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	std::string _type;
public:
	Ice(std::string const & type);
	Ice( const Ice &ice );
	Ice();
	virtual ~Ice();
	Ice	&operator=(const Ice &copy);
	const std::string  &getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif