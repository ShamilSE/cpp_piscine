#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}
Ice::Ice(const Ice & other): AMateria("ice") {*this = other;}
Ice& Ice::operator=(const Ice & other) {
	_xp = other._xp;
	return *this;
}
Ice::~Ice() {}


AMateria*	Ice::clone() const {
	AMateria*	ice = new Ice(*this);
	return ice;
}

void	Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << 
	target.getName() << " *" << std::endl;
}