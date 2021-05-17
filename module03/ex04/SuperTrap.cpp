#include "ClapTrap.hpp"
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>

SuperTrap::SuperTrap(std::string name)
:
	FragTrap(name),
	NinjaTrap(name),
	ClapTrap(name)
{
	std::cout << "SuperTrap constructor" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor called" << std::endl;
}