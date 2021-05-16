#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed():  _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed_point) {
	this->_value = fixed_point;
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

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	_value = raw;
}

