#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Calling MateriaSource constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "Calling copy MateriaSource constructor" << std::endl;
	_type = copy._type;
}

MateriaSource *MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "Calling MateriaSource equal operator" << std::endl;
	MateriaSource *materia = new MateriaSource(copy);
	return materia;
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
			return AMateria(new _learnedMateria[i]);
	return 0;
}
