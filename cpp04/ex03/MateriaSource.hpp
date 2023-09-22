#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource
{
private:
	AMateria _learned[4];
public:
	~MateriaSource() {}
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif