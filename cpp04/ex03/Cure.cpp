#include "Cure.hpp"

Cure::Cure(std::string const &type)
{
	std::cout << "Cure type constructor called" << std::endl;
	_type = type;
}

Cure::Cure( const Cure &cure )
{
	std::cout << "Cure copy constructor called" << std::endl;
	_type = "Cure";
}

Cure::Cure()
{
	std::cout << "Cure constructor called" << std::endl;
	_type = "Cure";
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(const Cure &copy)
{
	std::cout << "Cure copy operator called" << std::endl;
	if ( this != &copy ) {
		this->_type = copy._type;
	}
	return *this;
}

const std::string  &Cure::getType() const
{
	return _type;
}

Cure *Cure::clone() const
{
	Cure *copy = new Cure;
	copy->_type = _type;
	return _type;
}

void Cure::use(ICharacter& target)
{
	std::cout << "<ICharacter name" << " heals " << target.getName() << "'s wounds"<< std::endl;
}