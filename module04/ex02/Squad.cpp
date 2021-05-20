#include "Squad.hpp"

Squad::Squad(): _count(0) {}

Squad::Squad(const Squad & other) {
	_count = other._count;
	_marines = new ISpaceMarine*[_count];

	for (int i = 0; i < _count; i++) {
		_marines[i] = other._marines[i];
	}
	std::cout << "Squad copy consctructor" << std::endl;
}

Squad& Squad::operator=(const Squad & other) {
	(void)other;
	return *this;
}

Squad::~Squad() {}


int	Squad::getCount() const {return _count;}

ISpaceMarine*	Squad::getUnit(int index) const {
	if (index > _count -1)
		return NULL;
	return _marines[index];
}

int	Squad::push(ISpaceMarine* element) {
	_marines[_count] = element;
	_count++;
	return _count;
}

void	Squad::deleteMarines() {
	delete _marines;
	_marintes = NULL;
	std::cout << "delete marines" << std::endl;
}
