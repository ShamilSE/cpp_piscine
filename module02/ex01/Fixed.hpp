#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int					_value;
		static const int	_fractorial = 8;
		static const int	_exponent;

	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float i);
		~Fixed();
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& src);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator <<(std::ostream& out, const Fixed& src);

#endif