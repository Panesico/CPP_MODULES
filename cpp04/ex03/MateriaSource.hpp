#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : virtual public IMateriaSource
{
protected:
	AMateria _learnedMateria[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource *operator=(const MateriaSource &copy);
	~MateriaSource();
};

#endif