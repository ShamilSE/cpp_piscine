#include "HumanA.hpp"

#include <string>
#include <iostream>

void		HumanA::attack(void) {
	std::cout << this->name;
	std::cout << "attacks with his ";
	std::cout << this->getWearponType();
}
