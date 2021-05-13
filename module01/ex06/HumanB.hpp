#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Wearpon.hpp"

class HumanB {
	private:
		Wearpon		wearpon;
		std::string	name;

	public:
		HumanB(std::string name, Wearpon wearpon);
		void	attack(void);

		Wearpon&	getWearpon(void);
};

#endif