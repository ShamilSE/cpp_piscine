#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Wearpon.hpp"

class HumanA {
	private:
		Wearpon&	_wearpon;
		std::string	_name;

	public:
		HumanA(std::string name, Wearpon& wearpon);
		void	attack();

		Wearpon&	getWearpon();
};

#endif