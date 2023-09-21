#include "animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string type){
	std::cout << "Animal " << type << " constructor called" << std::endl;
	_type = type;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &copy){
	std::cout << "Animal copy operator called" << std::endl;
	if ( this != &copy ) {
		this->_type = copy._type;
	}
	return *this;
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}

Animal::Animal( const Animal &animal )
{
	std::cout << "Animal constructor called" << std::endl;
	*this = animal;
}

std::string     Animal::getType( void ) const{
	return this->_type;
}