#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}
Cure::Cure(const Cure & other): AMateria("cure") {*this = other;}
Cure& Cure::operator=(const Cure & other) {
	_xp = other._xp;
	return *this;
}
Cure::~Cure() {}


AMateria*	Cure::clone() const {
	AMateria*	cure = new Cure(*this);
	return cure;
}

void	Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << 
	"'s wounds *" << std::endl;
}