#include "Character.hpp"

Character::Character(std::string name): _name(name), _m_count(0) {
	for (int i = 0; i < 4; i++) {
		_materia[i] = NULL;
	}
}

Character::Character(const Character & other) {
	_name = other.getName();

	for (int i = 0; i < _m_count; i++) {
		if (!other._materia[i]);
		else {
			this->_materia[i] = other._materia[i]->clone();
		}
	}
}

Character& Character::operator=(const Character & other) {

	for (int i = 0; i < _m_count; i++) {
		if (!other._materia[i]);
		else {
			delete _materia[i];
			this->_materia[i] = other._materia[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (_materia[i])
			delete _materia[i];
	}
}

AMateria*	Character::getUnit(int index) const {
	if (index < 0 || index > 3)
		return NULL;
	else
		return _materia[index];
}

std::string const & Character::getName() const {return _name;}

void	Character::unequip(int idx) {
	if (idx > _m_count)
		return;
	_materia[idx] = NULL;
	for (int i = idx; i < 4; i++) {
		_materia[i] = _materia[i + 1];
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx > _m_count);
	else {
		_materia[idx]->use(target);
	}
}