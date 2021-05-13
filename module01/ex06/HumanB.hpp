#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Wearpon.hpp"
#include <string>
#include <iostream>

class	HumanB {
	private:
		Wearpon*	_wearpon;
		std::string	_name;

	public:
		HumanB(std::string name);
		void	attack();

		void	setWearpon(Wearpon& wearpon);
};

#endif