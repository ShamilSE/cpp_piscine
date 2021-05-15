#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed():  _fixed_point(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int fixed_point) {
	this->_fixed_point = fixed_point;
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

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw) {
	_fixed_point = raw;
}

