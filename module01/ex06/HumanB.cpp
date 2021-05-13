#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
:
	_name(name)
{}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_wearpon->getType() << std::endl;
}

void	HumanB::setWearpon(Wearpon& wearpon) {this->_wearpon = &wearpon;}
