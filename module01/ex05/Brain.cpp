#include "Brain.hpp"
#include <string>
#include <iostream>
#include <sstream>

std::string	Brain::identify(void) {
	std::ostringstream address;
	
	address << (void const *)this;
	std::string address_str = address.str();
	return address_str;
}

size_t	Brain::getWeight(void) {return this->weight;}