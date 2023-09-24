#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::MateriaSource(const MateriaSource &copy)
{

}

MateriaSource *MateriaSource::operator=(const MateriaSource &copy)
{

}

MateriaSource::~MateriaSource()
{
	delete[] _learnedMateria;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
		if (_learnedMateria[i] == 0)
			return (_learnedMateria[i] = materia, );
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
		if (_learnedMateria[i].getType() == type)
			return AMateria(_learnedMateria[i]);
	return 0;
}
