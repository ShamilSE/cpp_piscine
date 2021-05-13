#include "Wearpon.hpp"
#include <string>
#include <iostream>

Wearpon::Wearpon(std::string type) {this->type = type;}

const std::string&	Wearpon::getType(void) {
	const std::string& wearpon_type = this->type;
	return wearpon_type;
}

void	Wearpon::setType(std::string type) {this->type = type;}