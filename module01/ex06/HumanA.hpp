#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Wearpon.hpp"
#include <string>
#include <iostream>

class	HumanA {
	private:
		Wearpon		wearpon;
		std::string	name;

	public:
		HumanA(std::string name, Wearpon& wearpon);
		void	attack(void);

		Wearpon*	getWearpon(void);
};

#endif