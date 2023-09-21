#include <iostream>
#include "animal.hpp"

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain : virtual public Animal{
private:
	std::string _type;
public:
	Brain( const Brain &Brain );
	Brain();
	Brain(std::string type);
	~Brain();
	Brain	&operator=(const Brain &copy);
	virtual void    makeSound( void ) const;
	std::string     getType( void ) const;
};

#endif