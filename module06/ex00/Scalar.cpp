#include "Scalar.hpp"

Scalar::Scalar(std::string raw): _raw(raw) {
	toChar(_raw);
	toInt(_raw);
}

void	Scalar::toChar(std::string raw) {
	int		code;

	std::cout << "char: ";
	if (raw.size() == 1 && !std::isdigit(_raw[0])) {
		_c = raw[0];
		std::cout << "'" <<  _c << "'" << std::endl;
	}
	else {
		try
		{
			code = stoi(_raw);
			if (code < 0 || code > 127)
				std::cout << "impossible" << std::endl;
			else if (code < 32 || code > 126)
				std::cout << "Non displayable" << std::endl;
			else {
				_c = static_cast<char>(code);
				std::cout << "'" <<  _c << "'" << std::endl;
			}
		}
		catch (std::exception & e)
		{
			std::cerr << "impossible" << std::endl;
		}
	}
}

void	Scalar::toInt(std::string raw) {
	
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

std::string	Scalar::getRaw() const {return _raw;}
char		Scalar::getC() const {return _c;}
int			Scalar::getI() const {return _i;}
float		Scalar::getF() const {return _f;}
double		Scalar::getD() const {return _d;}
