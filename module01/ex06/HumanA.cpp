#include <string>
#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Wearpon& wearpon) : wearpon(wearpon) {
	this->name = name;
	this->wearpon = wearpon;
}

void	HumanA::attack(void) {
	std::cout << this->name;
	std::cout << " attacks whis his ";
	std::cout << this->wearpon.getType() << std::endl;
}

Wearpon*	HumanA::getWearpon(void) {return &(this->wearpon);}