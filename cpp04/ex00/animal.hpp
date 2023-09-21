#include <iostream>
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
class Animal{
protected:
	std::string _type;
public:
	Animal();
	Animal( const Animal &animal );
	Animal(std::string type);
	virtual ~Animal();			// FINISH DESTRUCTORS!!!!!!!!!
	Animal	&operator=(const Animal &copy);
	virtual void    makeSound( void ) const;
	std::string     getType( void ) const;
};

#endif