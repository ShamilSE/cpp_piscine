#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Wearpon wearpon) : wearpon(wearpon) {
	this->name = name;
	this->wearpon = wearpon;
}

void	HumanB::attack(void) {
	std::cout << this->name;
	std::cout << " attacks whis his ";
	std::cout << this->wearpon.getType() << std::endl;
}

Wearpon&	HumanB::getWearpon(void) {return this->wearpon;}