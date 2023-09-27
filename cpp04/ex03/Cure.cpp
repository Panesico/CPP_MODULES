#include <iostream>
#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Calling Cure constructor" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Calling copy Cure constructor" << std::endl;
	_type = copy._type;
}

Cure *Cure::operator=(const Cure &copy)
{
	std::cout << "Calling Cure equal operator" << std::endl;
	Cure *materia = new Cure(copy);
	return materia;
}

Cure::~Cure()
{
	std::cout << "Calling Cure destructor" << std::endl;
}

AMateria *Cure::clone() const
{
	AMateria *materia = new Cure(*this);
	return materia;
}

std::string const &Cure::getType() const
{
	return _type;
}

void Cure::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}