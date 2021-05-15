#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

const int Fixed::_exponent = 1 << Fixed::_fractorial;

Fixed::Fixed():  _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	_fixed_point = i;
}

Fixed::Fixed(const float i) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(i);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = src._fixed_point;
}

Fixed& Fixed::operator=(const Fixed& src) {
	std::cout << "Assignation operator called" << std::endl;

	this->_fixed_point = src._fixed_point;
	return *this;
}


float	Fixed::toFloat(void) const {
	return (float)_fixed_point;
}

int		Fixed::toInt(void) const {
	return (int)_fixed_point;
}


std::ostream& operator <<(std::ostream& out, const Fixed& src) {
	out << src.toFloat();
	(void)src;
	return out;
}