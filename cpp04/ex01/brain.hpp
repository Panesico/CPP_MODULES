#include <iostream>


#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain{
private:
	std::string _ideas[100];
public:
	Brain( const Brain &Brain );
	Brain();
	Brain(std::string type);
	~Brain();
	Brain	&operator=(const Brain &copy);
	std::string getIdea(int i);
	void changeIdea(int i, std::string newIdea);
	void copyIdeas(const Brain *copy);
};

#endif