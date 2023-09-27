#include "brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &copy){
	std::cout << "Brain copy operator called" << std::endl;
	if ( this != &copy ) {
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}


Brain::Brain( const Brain &brain )
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = brain._ideas[i];
}

std::string Brain::getIdea(int i)
{
	return _ideas[i];
}
void Brain::changeIdea(int i, std::string newIdea)
{
	_ideas[i] = newIdea;
}
void Brain::copyIdeas(const Brain *copy)
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy->_ideas[i];
}