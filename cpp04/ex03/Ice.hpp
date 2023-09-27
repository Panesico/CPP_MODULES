#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice
{
private:
	std::string _type;
public:
	Ice();
	Ice(const Ice &copy);
	Ice *operator=(const Ice &copy);
	~Ice();
	std::string const &getType() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif