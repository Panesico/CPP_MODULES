#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria type constructor called" << std::endl;
	_type = type;
}

AMateria::AMateria( const AMateria &aMateria )
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::AMateria()
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria copy operator called" << std::endl;

	return *this;
}