#include "Wearpon.hpp"
#include <string>
#include <iostream>

Wearpon::Wearpon(std::string type): _type(type) {};

std::string	Wearpon::getType() {return this->_type;}

void	Wearpon::setType(std::string type) {
	this->_type = type;
};