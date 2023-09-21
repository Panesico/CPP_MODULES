#include "dog.hpp"

Dog::Dog(){
	std::cout << "Dog constructor called" << std::endl;
	Animal::_type = "Dog";
	_type = "Dog";
}

Dog::Dog(std::string type){
	std::cout << "Dog " << type << " constructor called" << std::endl;
	_type = type;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &copy){
	std::cout << "Dog copy operator called" << std::endl;
	if ( this != &copy ) {
		this->_type = copy._type;
	}
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}

Dog::Dog( const Dog &dog )
{
	std::cout << "Animal constructor called" << std::endl;
	*this = dog;
}

std::string     Dog::getType( void ) const{
	return this->_type;
}