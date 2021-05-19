#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string const & type): Enemy(hp, type) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & other)
:
	Enemy(other._hit_points, other._type)
{}

SuperMutant& SuperMutant::operator=(const SuperMutant & other) {
	this->_hit_points = other._hit_points;
	this->_type = other._type;
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage) {
	if ((damage - 3) >= _hit_points || damage < 0);
	else
	{
		_hit_points -= (damage - 3);
	}
}