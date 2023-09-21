#include <iostream>
#ifndef DOG_HPP
# define DOG_HPP
# include "animal.hpp"
# include "brain.hpp"
class Dog : virtual public Animal{
		private:
		std::string _type;
		Brain *_brain;
		public:
		Dog( const Dog &dog );
		Dog();
		Dog(std::string type);
		~Dog();
		Dog	&operator=(const Dog &copy);
		virtual void    makeSound( void ) const;
		std::string     getType( void ) const;
};
#endif