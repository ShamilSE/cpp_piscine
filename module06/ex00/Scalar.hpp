#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>
#include <iostream>

class	Scalar {
	private:
		std::string _raw;
		char	_c;
		int		_i;
		float	_f;
		double	_d;

		Scalar();

	public:
		Scalar(std::string);
		Scalar(const Scalar & other);
		Scalar& operator=(const Scalar & other);
		~Scalar() {}


};

#endif