#include "PlasmaRiffle.hpp"

PlasmaRiffle::PlasmaRiffle()
:
	AWearpon("Plasma Riffle", 21, 5)
{}

PlasmaRiffle::PlasmaRiffle(std::string const & name, int apcost, int damage)
:
	AWearpon(name, apcost, damage)
{}

PlasmaRiffle::PlasmaRiffle(const PlasmaRiffle & other)
:
	AWearpon(other._name, other._apcost, other._damage)
{}

PlasmaRiffle& PlasmaRiffle::operator=(const PlasmaRiffle & other) {
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return *this;
}

PlasmaRiffle::~PlasmaRiffle() {}

void	PlasmaRiffle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}