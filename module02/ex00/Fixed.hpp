#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	private:
		int					_fixed_point;
		static const int	_fractorial = 0;

	public:
		Fixed();
		Fixed(int i);
		~Fixed();
		Fixed(const Fixed& src);
		Fixed&	operator=(const Fixed& src);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif