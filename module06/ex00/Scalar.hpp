#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <string>
#include <iostream>
#include <tgmath.h>

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

		std::string	getRaw() const;
		char	getC() const;
		int		getI() const;
		float	getF() const;
		double	getD() const;

		void	printChar();
		void	printInt();
		void	printFloat();
		void	printDouble();
};

#endif