#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : virtual public AMateria
{
private:
	std::string _type;
public:
	Cure();
	Cure(const Cure &copy);
	Cure *operator=(const Cure &copy);
	~Cure();
	std::string const &getType() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif