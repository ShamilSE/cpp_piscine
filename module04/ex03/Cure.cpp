#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}
Cure::Cure(const Cure & other): AMateria(other.getType()) {*this = other;}
Cure& Cure::operator=(const Cure & other) {
	_type = other._type;
	return *this;
}
Cure::~Cure() {}


AMateria*	Cure::clone() const {
	AMateria*	cure = new Cure(*this);
	return cure;
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << 
	"'s wounds *" << std::endl;
	_xp += 10;
}