#include <iostream>
# include "brain.hpp"
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
class Animal{
protected:
	std::string _type;
	Brain	*_brain;
public:
	Animal();
	Animal( const Animal &animal );
	Animal(std::string type);
	virtual ~Animal();			// FINISH DESTRUCTORS!!!!!!!!!
	virtual Animal	&operator=(const Animal &copy);
	virtual void    makeSound( void ) const = 0;
	virtual std::string     getType( void ) const = 0;
};

#endif