#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Calling AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "Calling type AMateria constructor" << std::endl;
	if (type == "Ice")
		_type = type;
	else if (type == "Cure")
		_type = type;
	else
		_type = "Unkown";
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "Calling copy AMateria constructor" << std::endl;
	_type = copy._type;
}

AMateria *AMateria::operator=(const AMateria &copy)
{
	std::cout << "Calling AMateria equal operator" << std::endl;
	AMateria *materia = new AMateria(copy);
	return materia;
}

AMateria::~AMateria()
{
	std::cout << "Calling AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return _type;
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