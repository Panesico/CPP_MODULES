#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const & type)
{

}

AMateria::AMateria(const AMateria &copy)
{

}

AMateria *AMateria::operator=(const AMateria &copy)
{

}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
	return _type;
}

AMateria::AMateria* clone()
{

}

void AMateria::use(ICharacter& target)
{
	if (target.getName() == "Ice")
		std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
	else if (target.getName() == "Cure")
		std::cout <<  "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout <<  "Unkown spell" << std::endl;
}