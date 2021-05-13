#ifndef HUMANA
#define HUMANA

#include "Wearpon.hpp"
#include <string>
#include <iostream>

class	HumanA {
	private:
		std::string	name;
		Wearpon		wearpon;

	public:
		void		attack(void);
		Wearpon&	getWearponType(void);
};

#endif