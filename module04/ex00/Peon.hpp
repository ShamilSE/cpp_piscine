#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <string>
#include <iostream>

class Peon : public Victim {
	public:
		Peon(std::string name);
		Peon(const Peon & src);
		Peon& operator=(const Peon & src);
		~Peon();

		std::string	getName() const;
		void	getPolymorphed() const;
};

std::ostream&	operator<<(std::ostream& out, const Peon & src);

#endif