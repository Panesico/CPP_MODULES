#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : virtual public IMateriaSource
{
protected:
	AMateria _learnedMateria[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource *operator=(const MateriaSource &copy);
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif