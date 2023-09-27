#include "cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called" << std::endl;
	Animal::_type = "Cat";
	_type = "Cat";
}

Cat::Cat(std::string type){
	std::cout << "Cat " << type << " constructor called" << std::endl;
	_type = type;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(const Cat &copy){
	std::cout << "Cat copy operator called" << std::endl;
	if ( this != &copy ) {
		this->_type = copy._type;
		this->_brain = new Brain;
		_brain->copyIdeas(copy._brain);
	}
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow!" << std::endl;
}

Cat::Cat( const Cat &cat ): Animal(cat){
	std::cout << "Cat constructor called" << std::endl;
	this->_type = cat._type;
	this->_brain = new Brain;
	_brain->copyIdeas(cat._brain);
}

std::string     Cat::getType( void ) const{
	return this->_type;
}