#include <iostream>
#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Calling Ice constructor" << std::endl;
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Calling copy Ice constructor" << std::endl;
	_type = copy._type;
}

Ice *Ice::operator=(const Ice &copy)
{
	std::cout << "Calling Ice equal operator" << std::endl;
	Ice *materia = new Ice(copy);
	return materia;
}

Ice::~Ice()
{
	std::cout << "Calling Ice destructor" << std::endl;
}

AMateria *Ice::clone() const
{
	AMateria *materia = new Ice(*this);
	return materia;
}

std::string const &Ice::getType() const
{
	return _type;
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at" << target.getName() << "*" << std::endl;
}