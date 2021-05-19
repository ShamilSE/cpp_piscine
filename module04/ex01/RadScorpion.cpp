#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion & other)
:
	Enemy(other._hit_points, other._type)
{}

RadScorpion& RadScorpion::operator=(const RadScorpion & other) {
	this->_hit_points = other._hit_points;
	this->_type = other._type;
	return *this;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}