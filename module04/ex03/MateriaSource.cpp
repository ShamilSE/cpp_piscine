#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	_count = 0;
}

MateriaSource::MateriaSource(const MateriaSource & other) {
	for (int i = 0; i < _count; i++) {
		if (other._materia[i]) {
			this->_materia[i] = other._materia[i]->clone();
		}
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource & other) {
	for (int i = 0; i < _count; i++) {
		if (other._materia[i]) {
			delete _materia[i];
			this->_materia[i] = other._materia[i]->clone();
		}
		else
			delete _materia[i];
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _count; i++)
		delete _materia[i];
}

void	MateriaSource::learnMateria(AMateria* materia) {
	if (_count < 4)
		_materia[_count++] = materia;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _count; i++) {
		if (_materia[i]->getType() == type) {
			if (!type.compare("ice"))
				return new Ice;
			else if (!type.compare("cure"))
				return new Cure;
		}
	}
	return NULL;
}