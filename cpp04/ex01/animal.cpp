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
		this->_brain = new Brain;
		for (int i = 0; i < 100; ++i)
			this->_brain->_ideas[i] = copy._brain->ideas[i];
	}
	return *this;
}

void Animal::makeSound() const{
	std::cout << "Animal sound" << std::endl;
}

Animal::Animal( const Animal &animal )
{
	std::cout << "Animal constructor called" << std::endl;
	this->_type = animal._type;
	this->_brain = new Brain;
	for (int i = 0; i < 100; ++i)
		this->_brain->_ideas[i] = animal._brain->ideas[i];
}

std::string     Animal::getType( void ) const{
	return this->_type;
}