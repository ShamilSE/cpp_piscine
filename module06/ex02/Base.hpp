#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>
#include <time.h>

class	Base {
	public:
		virtual ~Base() {};
		virtual void identify() const {};
};

class	A : public Base {
	public:
		void	identify() const {std::cout << "A" << std::endl;}
};
class	B : public Base {
	public:
		void	identify() const {std::cout << "B" << std::endl;}
};
class	C : public Base {
	public:
		void	identify() const {std::cout << "C" << std::endl;}
};

std::ostream& operator<<(std::ostream&out, const Base & r) {
	(void)r;
	r.identify();
	return out;
}

#endif