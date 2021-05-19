#include "PowerFist.hpp"

PowerFist::PowerFist()
:
	AWearpon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist & other)
:
	AWearpon(other._name, other._apcost, other._damage)
{}

PowerFist& PowerFist::operator=(const PowerFist & other) {
	this->_name = other._name;
	this->_apcost = other._apcost;
	this->_damage = other._damage;
	return *this;
}

PowerFist::~PowerFist() {}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}