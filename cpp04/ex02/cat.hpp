#include <iostream>
#ifndef CAT_HPP
# define CAT_HPP
# include "animal.hpp"
# include "brain.hpp"
class Cat : virtual public Animal{
		private:
		std::string _type;
		Brain *_brain;
		public:
		Cat( const Cat &cat );
		Cat();
		Cat(std::string type);
		~Cat();
		Cat	&operator=(const Cat &copy);
		virtual void    makeSound( void ) const;
		std::string     getType( void ) const;
};
#endif