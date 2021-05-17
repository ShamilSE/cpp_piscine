#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(const SuperTrap & src);
		SuperTrap operator=(const SuperTrap & src);
};

#endif