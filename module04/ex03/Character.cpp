#include "Character.hpp"

Character::Character(std::string name): _name(name) {}
// Character::Character(const Character & other) {
// 	_name = other.getName();
// 	AMateria* new_materia[4];

// 	for (int i = 0; i < 4; i++) {
// 		if (!other._materia[i]);
// 		else {
// 			new_materia[i] = other._materia[i];
// 		}
// 	}
// 	this->_materia = new_materia;
// }

// Character& Character::operator=(const Character & other) {
// 	_name = other.getName();
// 	AMateria* new_materia[4];

// 	for (int i = 0; i < 4; i++) {
// 		if (!other._materia[i]);
// 		else {
// 			new_materia[i] = other._materia[i];
// 		}
// 	}
// 	this->_materia = new_materia;
// 	return *this;
// }

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete _materia[i];
	}
	// delete [] _materia;
}

AMateria*	Character::getUnit(int index) const {
	if (index < 0 || index > 3)
		return NULL;
	else
		return _materia[index];
}