#include "Character.hpp"

Character::Character(std::string name): _name(name), _m_count(0) {
	for (int i = 0; i < 4; i++) {
		_materia[i] = NULL;
	}
}

Character::Character(const Character & other) {
	*this = other;
}

Character& Character::operator=(const Character & other) {
	_m_count = other._m_count;
	if (this != &other) {
		for (size_t i = 0; i < _m_count; i++)
			delete _materia[i];
		for (size_t i = 0; i < _m_count; i++)
			_materia[i] = other._materia[i]->clone();
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
	if (index > 0 && index < 3)
		return _materia[index];
	return NULL;
}

std::string const & Character::getName() const {return _name;}

void	Character::unequip(int idx) {
	if ((size_t)idx > _m_count)
		return;
	_materia[idx] = NULL;
	for (int i = idx; i < 4; i++) {
		_materia[i] = _materia[i + 1];
	}
	_m_count--;
}

void	Character::use(int idx, ICharacter& target) {
	if ((size_t)idx < _m_count)
		_materia[idx]->use(target);
}

void	Character::equip(AMateria* m) {
	if (_m_count < 4) {
		_materia[_m_count] = m;
		_m_count++;
	}
}