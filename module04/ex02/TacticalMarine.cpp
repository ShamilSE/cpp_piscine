#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine & other) {
	(void)other;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine & other) {
	(void)other;
	return *this;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine*	TacticalMarine::clone() const {
	TacticalMarine*	marine = new TacticalMarine;
	return marine;
}

void	TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}