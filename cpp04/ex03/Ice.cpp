#include "Ice.hpp"

Ice::Ice(std::string const &type)
{
	std::cout << "Ice type constructor called" << std::endl;
	_type = type;
}

Ice::Ice( const Ice &ice )
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::Ice()
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice	&Ice::operator=(const Ice &copy)
{
	std::cout << "Ice copy operator called" << std::endl;
	if ( this != &copy ) {
		this->_type = copy._type;
	}
	return *this;
}

const std::string  &Ice::getType() const
{
	return _type;
}

Ice *Ice::clone() const
{
	Ice *copy = new Ice;
	copy->_type = _type;
	return _type;
}

void Ice::use(ICharacter& target)
{
	std::cout << "<ICharacter name>" << " shoots an ice bolt at " << target.getName() << std::endl;
}