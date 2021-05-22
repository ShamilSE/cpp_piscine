#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed():  _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	_value = i * 256;
}

Fixed::Fixed(const float i) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(i * 256);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_value = src._value;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Assignation operator called" << std::endl;

	this->_value = src._value;
	return *this;
}


float	Fixed::toFloat(void) const {
	return static_cast<float>(_value ) / 256;
}

int		Fixed::toInt(void) const {
	return _value / 256;
}


std::ostream& operator <<(std::ostream& out, const Fixed& src) {
	out << src.toFloat();
	return out;
}
