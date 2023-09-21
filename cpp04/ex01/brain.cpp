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
		this->_brain = new Brain;
		for (int i = 0; i < 100; ++i)
			this->_ideas[i] = copy._ideas[i];
	}
	return *this;
}


Brain::Brain( const Brain &brain )
{
	std::cout << "Animal constructor called" << std::endl;
	this->_brain = new Brain;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = brain._ideas[i];
}

std::string getIdea(int i)
{
	return _idea[i];
}
void changeIdea(int i, std::string newIdea)
{
	_idea[i] = newIdea;
}
void copyIdeas(const Brain &copy)
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = copy->_ideas[i];
}