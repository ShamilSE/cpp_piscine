#include "Scalar.hpp"

Scalar::Scalar(std::string raw): _raw(raw) {
	
}

Scalar::Scalar(const Scalar & other) {
	*this = other;
}

Scalar&	Scalar::operator=(const Scalar & other) {
	_raw = other._raw;
	_c = other._c;
	_i = other._i;
	_f = other._f;
	_d = other._d;

	return *this;
}

