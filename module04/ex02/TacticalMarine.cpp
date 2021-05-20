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

TacticalMarine::~TacticalMarine() {}