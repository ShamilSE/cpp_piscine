#include "HumanA.hpp"
#include <string>
#include <iostream>
 
HumanA::HumanA(std::string name, Wearpon& wearpon): _wearpon(wearpon), _name(name) {}

void	HumanA::attack() {
	std::cout << _name << " attacks whis his " << _wearpon.getType() << std::endl;
}

Wearpon&	HumanA::getWearpon() {
	return _wearpon;
}
