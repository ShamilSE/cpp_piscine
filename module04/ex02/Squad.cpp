#include "Squad.hpp"

Squad::Squad(): _count(0) {}

Squad::Squad(const Squad & other) {
	_count = other._count;
	_marines = new ISpaceMarine*[_count];

	for (int i = 0; i < _count; i++) {
		_marines[i] = other._marines[i]->clone();
	}
}

Squad& Squad::operator=(const Squad & other) {
	_count = other._count;
	_marines = new ISpaceMarine*[_count];

	for (int i = 0; i < _count; i++) {
		delete _marines[i];
		_marines[i] = other._marines[i];
	}
	return *this;
}

Squad::~Squad() {
	for (int i = 0; i < _count; i++)
		delete _marines[i];
	delete [] _marines;
}


int	Squad::getCount() const {return _count;}

ISpaceMarine*	Squad::getUnit(int index) const {
	if (index > _count -1)
		return NULL;
	return _marines[index];
}

int	Squad::push(ISpaceMarine* element) {
	if (!element)
		return _count;
	for (int i = 0; i < _count; i++)
	{
		if (element == _marines[i])
			return _count;
	}
	_marines[_count] = element;
	_count++;
	return _count;
}
